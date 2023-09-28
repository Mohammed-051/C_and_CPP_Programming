#include <bits/stdc++.h>
using namespace std;
int main()
{
  int test_case;
  cout << fixed << setprecision(2);
  while (cin >> test_case)
  {
    string name;
    double service_A, blocks_A, attack_A;
    double service_S, blocks_S, attack_S;
    double total_sA = 0, total_bA = 0, total_aA = 0;
    double total_sS = 0, total_bS = 0, total_aS = 0;

    for (int i =0; i< test_case; i++)
    {
      cin >> name;
      cin >> service_A >> blocks_A >> attack_A;
      cin >> service_S >> blocks_S >> attack_S;

      total_aA += attack_A;
      total_bA += blocks_A;
      total_sA += service_A;

      total_aS += attack_S;
      total_bS += blocks_S;
      total_sS += service_S;
    }

    double Saque = (total_sS/total_sA)*100;
    double Bloqueio = (total_bS/total_bA)*100;
    double Ataque = (total_aS/total_aA)*100;
    cout << "Pontos de Saque: " << Saque <<" %."<<endl;
    cout << "Pontos de Bloqueio: " << Bloqueio <<" %."<<endl;
    cout << "Pontos de Ataque: " << Ataque <<" %."<<endl;
  }

  return 0;
}