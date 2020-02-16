grammar SLR;

expression: expression '+' expression | DIGIT*;
DIGIT: [0-9];