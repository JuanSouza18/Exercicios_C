#include <stdio.h>

int main()
{
    int i;
    int senha_definida = 589472;
    int senha_usuario;
    int tentativas = 3;

    for (i = 0; i < tentativas; i++)
    {
        printf("Digite a senha de 6 digitos: ");
        scanf("%d", &senha_usuario);

        if (senha_usuario == senha_definida)
        {
            printf("Acesso liberado\n");
            return 0;
        }
        else
        {
            printf("Acesso negado!\n");
        }
    }

    printf("Limite máximo de tentativas excedido. Usuário bloqueado!\n");
    return 0;
}