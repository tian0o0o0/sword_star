# Sword Star

A 2.5D pixelated fighting game inspired by Hellish Quart, built with SFML.

---

## Build & Run

```powershell
& ".\library\SFML-3.0.2\compiler\mingw64\bin\g++.exe" -g ".\sword_star_main.cpp" -o ".\sword_star_main.exe" -I".\library\SFML-3.0.2\include" -L".\library\SFML-3.0.2\lib" -lsfml-graphics -lsfml-window -lsfml-system; $env:PATH = ".\library\SFML-3.0.2\bin;$env:PATH"; & ".\sword_star_main.exe"
```

---

## Core Concepts to Learn

### SFML Fundamentals
- Game loop & delta time
- Input handling (keyboard/gamepad)
- Sprite rendering & animation
- Audio playback (sound effects, music)
- Views & camera control

### Game Programming Concepts
- State machines (menu, gameplay, pause, etc.)
- Entity-Component System (ECS) or object-oriented game architecture
- Collision detection (AABB, hitboxes/hurtboxes)
- Frame data & fighting game mechanics
- Physics simulation (gravity, knockback, momentum)

### 2.5D Specific
- Parallax scrolling for depth
- Z-ordering (sorting sprites by depth)
- Movement on X/Y axis with pseudo-Z depth

### Pixel Art & Animation
- Sprite sheets & frame-based animation
- Attack animation states (startup, active, recovery frames)
- Hit reactions & hurt animations

---

## Development Roadmap

### Phase 1: Foundation
1. Set up project structure (separate files for player, input, rendering, etc.)
2. Implement game state manager (menu → fight → results)
3. Create basic game loop with fixed timestep
4. Add input system supporting keyboard + gamepad

### Phase 2: Character System
1. Design character state machine (idle, walk, attack, block, hit, knockdown)
2. Implement sprite animation system
3. Create hitbox/hurtbox system
4. Build attack data structure (damage, range, startup frames, active frames, recovery)

### Phase 3: Combat Mechanics
1. Implement basic attacks (light, heavy, thrust, slash)
2. Add blocking & parry system
3. Create hit detection & damage calculation
4. Add knockback physics & hit stun
5. Implement stamina/posture system (like Hellish Quart)

### Phase 4: 2.5D Movement
1. Add Z-axis (depth) movement
2. Implement depth-based sprite scaling
3. Create parallax background layers
4. Handle depth-aware collision

### Phase 5: Polish
1. Add screen shake & hit effects
2. Implement particle system (blood, sparks)
3. Create UI (health bars, round counter)
4. Add sound effects & music
5. Menu system & character select

### Phase 6: Multiplayer (Optional)
1. Local 2-player support
2. Network multiplayer (advanced)

---

## Task Division (2 People)

| Person A | Person B |
|----------|----------|
| Core engine & game loop | Character & animation system |
| Input handling | Combat mechanics & hitboxes |
| Physics & collision | UI & menus |
| Audio system | Art integration & effects |

---

## Tools & Resources

- **Art**: Aseprite (pixel art & animation)
- **Design**: Frame data spreadsheet for attacks
- **Reference**: Study Hellish Quart, Nidhogg, Samurai Gunn
- **Audio**: Free SFX sites (freesound.org), Audacity for editing

---

## Key Challenges

1. **Hitbox timing** - Fighting games live/die by precise frame data
2. **Input buffering** - Players expect inputs to queue during animations
3. **Network sync** - If adding online play, rollback netcode is complex
4. **Balance** - Combat needs extensive playtesting
