#include <iomanip>

#include "board.h"
#include "iostream"
#include "ranks_and_files.h"

int main() {

    Chessboard b = Chessboard();
    b.setupBoard();

    b.movePiece(RANK_E, FILE_2, RANK_E, FILE_4);
    b.output();

    std::cout << "Colour: " << b.getPiece(RANK_E, FILE_4).getColour() << " Type: " << b.getPiece(RANK_E, FILE_4).getType();

    // b.output();

    return 0;
}
