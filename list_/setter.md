> > printf("Insere a sua matricula: ");
> > scanf("%d", &aluno01);

for (int i = 0; i < 10; i++)
{
cout << endl;
printf("\n--- Qual o resultado da questao %d? ---\n\n", i + 1);
printf("ALUNO %i >> ", aluno01);
// scanf("%d", &resposta);
cin >> resposta;

    if (toupper(resposta) == gabarito[i])
    {
      printf("\nESSA RESPOSTA ESTA CERTA\n\n");
      total01 += 1;
      system("pause");
    }
    else
    {
      printf("\nESSA RESPOSTA ESTA ERRADA\n\n");
      system("pause");
    }
    system("cls");

}

printf("Total de pontos: %d", total01);
