grammar SLR;

x: expression;

expression: expression '+' expression | DIGIT*;
DIGIT: [0-9];