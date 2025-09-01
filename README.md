# 🧙‍♂️ so_long - Harry Potter Edition  

A 2D game built in C using the **MiniLibX** (42 project).  
You control **Harry Potter** inside a magical maze, collecting spell books 📚 and reaching the exit 🚪.  
The project covers **map validation**, **pathfinding with DFS**, **graphic rendering**, and **user interaction** with key events.  

---

## ⚙️ Requirements  
- Linux (or macOS with X11 installed)  
- gcc compiler  
- Make  
- X11 and MiniLibX libraries (provided by 42)  

---

## 🔨 Compilation  
```bash
make

-This will generate the so_long executable.

## Clean object files:
make clean

Full cleanup:
make fclean

▶️ Run the Game
./so_long maps/map.ber

map.ber is a text file that represents the map (walls, floor, collectibles, exit, and player).

Example map:
111111
1P0C01
100001
1C0E01
111111

🎮 Controls

W / ↑ → Move Up

S / ↓ → Move Down

A / ← → Move Left

D / → → Move Right

ESC → Quit

Goal: Collect all spell books 📚 and reach the exit 🚪.

📂 Project Structure

├── assets/        # XPM sprites (wall, floor, player, collectibles, exit)
├── maps/          # Example maps
├── src/           # Game source files
├── include/       # Header files
├── Makefile
└── README.md

📸 Screenshots

📜 License

This project is part of the 42 curriculum and is for educational purposes only.
