 

//Atividade 5 

// a) int *p = a;

// Resposta : Esta errado pois esta tentando atribuir um valor interio (a) diretamente em um ponteiro (p) , a forma correta seria " int *p = &a;".

//  b) int *p = &a; 

// Correto 

// c) int *p = *a;

// Resposta : a é uma variável do tipo int, não um ponteiro. O código *a tentaria desreferenciar a, mas isso não é válido, pois a não é um ponteiro. O correto seria int *p = &a; para armazenar o endereço de a no ponteiro p.

// d) Errado :

// p = 4 atribui o valor 4 ao ponteiro p em si, e não ao valor que ele aponta. Para alterar o valor apontado por p, devemos desreferenciar o ponteiro assim: *p = 4;


// e) Errado : 
// &p = 4 não é válido em C. &p é o endereço do ponteiro, e você não pode atribuir um valor diretamente a um endereço dessa maneira. A forma correta de alterar o valor apontado por p é: *p = 4;
