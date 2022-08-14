#include <iostream>


const int WIDTH = 30;
const int HEIGHT = 30;

void setUp();
void draw();

bool gameOver;
int score;

int main() {
    setUp();

    while ( !gameOver ) {
        draw();
    }
    return 0;
}

//initial settings
void setUp() {
    gameOver = false;
    score = 0;
}

//draw map
void draw() {
    system("clear");

    std::cout << "Score: " << score << std::endl;

    for ( int i = 0; i < WIDTH; ++i ) {
        std::cout << '#';
    }
    std::cout << std::endl;

    int limit = HEIGHT - 1;
    int border = WIDTH - 1;

    for ( int j = 1; j < limit; ++j ) {
        for ( int k = 0; k < WIDTH; ++k ) {
            if ( k == 0 || k == border ) {
                std::cout << '#';
            } else {
                std::cout << ' ';
            }
        }
        std::cout << std::endl;
    }

    for ( int l = 0; l < WIDTH; ++l ) {
        std::cout << '#';
    }
    std::cout << std::endl;
}
