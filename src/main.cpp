#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  int i;
  // put your main code here, to run repeatedly:
}//カレントディレクトリ

//セッティング
//1   git init                              毎プロジェクトごとにする
//2   git config --global user.name 名前    そのプロジェクト以外も（1度だけの設定でよし）
//2   git config --local user.name 名前     そのプロジェクトのみ
//3   git config --global user.email メールアドレス   
//4   git remote add origin URL（GitHabのプロジェクトから）

//ここからあげていく
//git add -A                    ステージング
//git commit -m "名前"          コミッティング
//git branch -M main            今までは仮想空間的なところでやっていいたから
//-m、-Mは名前の変更のコマンド
//git push origin HEAD          実際にあげる

//branch を切っていく
//git branch                    ファイル表示
//git branch test               
//git checkout test             testに移動できる(HEADを移動させるコマンド)
//git checkout -b test          テストを作りつつ移動できる
