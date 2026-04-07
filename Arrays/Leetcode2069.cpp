class Robot {
public:
    int w, h, x, y, dir;
    int perimeter;
    
    // Directions: East, North, West, South
    vector<string> dirs = {"East", "North", "West", "South"};
    vector<pair<int,int>> move = {
        {1,0}, {0,1}, {-1,0}, {0,-1}
    };
    
    Robot(int width, int height) {
        w = width;
        h = height;
        x = 0;
        y = 0;
        dir = 0; // East
        perimeter = 2 * (w + h - 2);
    }
    
    void step(int num) {
        num %= perimeter;
        
        // special case
        if (num == 0) {
            if (x == 0 && y == 0) {
                dir = 3; // South
            }
            return;
        }
        
        while (num--) {
            int nx = x + move[dir].first;
            int ny = y + move[dir].second;
            
            // check boundary
            if (nx < 0 || nx >= w || ny < 0 || ny >= h) {
                dir = (dir + 1) % 4; // turn counterclockwise
                nx = x + move[dir].first;
                ny = y + move[dir].second;
            }
            
            x = nx;
            y = ny;
        }
    }
    
    vector<int> getPos() {
        return {x, y};
    }
    
    string getDir() {
        return dirs[dir];
    }
};
