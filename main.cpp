#include <iomanip>

#include "board.h"
#include "iostream"
#include "ranks_and_files.h"

int main(void) {

    Chessboard b = Chessboard();
    b.setupBoard();

    b.output();

    return 0;
}
