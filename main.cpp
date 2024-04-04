#include <iostream>
#include <string>
#include <random>
using namespace std;
int main()
{
    
    int data;
    string colocartarefa="Nada";
    int escolha2;
    int escolha1;
    int entrada;
    string nome="Link";
    int idade=12;
    string cidade ="Hyrule;";
    string experiencia ="Aventura mágica;";
    string cargo = "Aventureiro monitor;";
    bool infinito = true;
    while(infinito){
        cout<<"Olá link, por favor escolha uma opção abaixo:"<<endl;
        cout<<"1->Dados pessoais;"<<endl;
        cout<<"2->Dados da ONG;"<<endl;
        cout<<"3->Atividade feita pelo usário na ONG;"<<endl;
        cout<<"4->Número de tarefas feitas;"<<endl;
        cout<<"5->Sair do programa;"<<endl;
        cin>>entrada;
        switch(entrada){
            
            case 1:
            {
            cout<<"1->Nome: "<<nome<<endl;
            cout<<"2->Idade: "<<idade<<endl;
            cout<<"3->Cidade:"<<cidade<<endl;
            cout<<"4->experiencia: "<<experiencia<<endl;
            cout<<"5-> Cargo: "<<cargo<<endl;
            
            }
            
            case 2:
            {
            cout<<"Nome da ong: Conservação Internacional Brasil (CI-Brasil)"<<endl;
            cout<<"Ano de criação: 1990;"<<endl;
            cout<<"Objetivo da ONG: A CI-Brasil também age na preservação do meio ambiente, espalhando conceitos de sustentabilidade por meio de projetos educacionais, culturais e socioambientais."<<endl;
            cout<<"O que a ONG faz: A ONG faz um monitoramento do desmatamento e da destruição da flora brasileira, focada nas regiões norte e nordeste do país, onde os índices são mais altos."<<endl;
            cout<<"Visão da ONG: A organização entende que somos dependentes da natureza para termos comida, água e padrão de saúde adequado, portanto devemos preservá-la. "<<endl;
            break;
            }
         case 3:
         {
         int repita = 1;
         do{
         cout<<"Link: "<<cargo<<endl;
         cout<<"Última atividade feita: Monitoramento da floresta amazônica;"<<endl;
         cout<<"Próximo serviço: explorar as matas do estado do Pará, possível desmatamento em série;"<<endl;
         cout<<"Dia de embarque para a próxima atividade: 26/08/24;";
         cout<<"Deseja ver se algo foi acrescentado ou não?(sim=1)."<<endl;
         int escolha4;
         cin>> escolha4;
         if(escolha4==1){
         int repita = 0;
         if(colocartarefa=="Nada"){
             cout<<"nenhum acréscimo feito."<<endl;
         }
         else{
              cout<<"Houve um acréscimo do senhor gostaria de ver?(sim=1)"<<endl;
              int escolha3;
              cin>>escolha3;
              if(escolha3==1){
                  cout<<"Tarefa adicionada: "<<colocartarefa<<endl;
              }
         }
         }
         }
         while(repita);
    
         }
       
         
         case 4:
         {
         random_device numAleatorio;
         uniform_int_distribution <> distribuicao(1,100);
         int valorInteiro = distribuicao(numAleatorio);
         cout<<"Tarefas feitas: "<<valorInteiro<<endl;
         cout<<"Deseja adicionar alguma a mais? Se sim digite 1 para adiconar aqui como mais uma tarefa feita e na opção 3 o que vai ser feito e a data, ou digite 2 para apenas adicionar +1 aqui nas tarefas feitas, se não for nenhuma das duas apenas digite um número diferente dos dois;"<<endl;
         cin>>escolha2;
         if(escolha2==1){
             cout<<"Então coloque a seguir a sua tarefa: "<<endl;
             cin>>colocartarefa;
             cout<<"Agora o dia proposto: "<<endl;
             cin>>data;
             valorInteiro+= 1;
             cout<<"Tarefas feitas: "<<valorInteiro<<endl;
         }
         else if(escolha2==2){
             for(int i= 1;i < valorInteiro;i*=200){
             valorInteiro+= 1;
             cout<<"Tarefas feitas: "<<valorInteiro<<endl;
                 
             }
         }
         else{
             cout<<"Não foi adicionada nenhuma tarefa para ser feita."<<endl;
         }
         break;
         }
         
         case 5:
        {
        cout<<"Obrigado por utilizar o site Link, até outro dia útil ;)."<<endl;
        infinito = false;
        break;
        }
    }
        }
        
    

    return 0;
}