// Piece Table Implementation in C.
#include <stdbool.h>
#include <stdlib.h>

typedef struct{
  unsigned int start;
  size_t length;
  bool isAdd;
} Piece;

typedef struct{
  char *add;
  const char original[];
  
} PieceTable;
