grammar CloningTest;

expression: expression ('+' expression)+ | number | multiplication;
multiplication: number '(' expression ')';
number: DIGIT*;
DIGIT: [0-9];