#include <iostream>
#include <string>
using namespace std;

class Neko
{
  private: string name;
  public : Neko(string s){
    name = s;
  }
  void naku(){
    cout<<"にゃあ。俺様は"<<name<<"だ。"<<endl;
  }
};

int main()
{
  string s;
  cout << "どら猫を生成します。名前を入力してください。" << endl;
  cin >> s;
  Neko dora(s);
  cout << "あなたの名付けた猫がメモリ上に生成されました" << endl;
  cout << "猫が鳴きます。" << endl;
  dora.naku();
}

int _main()
{
  Neko dora("ボス");
  cout<<"あなたの名付けた猫がメモリ上に作成されました。"<<endl;
  cout<<"猫が鳴きます"<<endl;

  dora.naku();
}