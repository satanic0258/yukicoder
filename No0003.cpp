#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int fnNumOneInBit(int n){
  int result=0;
  while(n>0){
    if(n%2==1) ++result;
    n/=2;
  }
  return result;
}

int main(){
  int tmp;
  int now, d;
  queue<int> Queue;  //次に探索する予定を入れておくキュー
  cin >> tmp;  //入力
  const int n=tmp;
  vector<int> depth(n,0);  //vectorのdepthを0で初期化
  bool bLoop=true;  //ループに入った(辿りつけない)フラグ
  int depthMin;  //一番たどり着くのに短い手筈

  //幅優先探索
  Queue.push(1);
  depth[0]=1;

  while(!Queue.empty()){  //キューが空になるまで
    now=Queue.front();  //キューの先頭を読み込んで
    Queue.pop();  //その先頭を削除

    if(now==n){
      bLoop=false;
      break;
    }else{
      d=fnNumOneInBit(now);  //今の数字の2進数表記での1の数を代入
      for(int i=0; i<2; ++i){              //1回目は引く、
	tmp = (i==0) ? (now-d) : (now+d);  //2回目は足すルートを調べる
	if(tmp>0 && tmp<=n && depth[tmp-1]==0){  //範囲内で未探索のとこなら
	  Queue.push(tmp);  //次にそこを探索するよう指定
	  depth[tmp-1]=depth[now-1]+1;  //次の深さは今の深さに+1したもの
	}
      }
    }
  }

  if(bLoop) depthMin=-1;
  else      depthMin=depth[n-1];
  cout << depthMin << endl; //出力

  return 0;
}
