/*11Deseja-se publicar o n�mero de acertos de cada aluno em uma prova em forma de testes. A prova consta de
10 quest�es, cada uma com quatro alternativas identificadas por A, B, C, e D. Para isso s�o dados:
o cart�o gabarito;o n�mero de alunos da turma;
o cart�o de respostas para cada aluno, contendo o seu n�mero e suas resposta*/
int main(){
setlocale(LC_ALL,"portuguese");
int nAlunos, i, j, questaoCerta;
char vGabarito [TAM], respostaAluno;

printf ( "\n Digite o n� de alunos: " );
scanf ( "\n % d " , & nAlunos);

printf("\nGabarito da prova: \ n");
for (i = 0 ; i<TAM; i ++)
	{
	printf ( "\n Resposta da quest�o % d : " , i + 1 );
	scanf ( "  % c " , & vGabarito [i]);	
	}

for (i = 0 ; i <nAlunos; i ++)
	{
	questaoCerta = 0 ;	
	printf("\nAluno % d : \ n ", i + 1 );	
	for (j = 0 ; j <TAM; j ++)
		{
		printf ( "\n Digite a resposta da quest�o % d : " , j + 1 );
		scanf ( "\n  % c " , & respostaAluno);	
			if (respostaAluno == vGabarito [j]) 
			{
			questaoCerta ++;	
			}
		}
		printf ( "\n Aluno % d acertou % d quest�es. " , i + 1 , questaoCerta);
	}

return  0 ;	
}
