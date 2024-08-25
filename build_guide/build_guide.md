# A PIECE OF KEYBOARDのビルドガイド

## キット内容
以下の内容がキットに含まれます。  
| ケース関係               | 個数    |
| :----------------------- | ------- |
| キーキャップ＆上部パーツ | 1セット |
| ミドルプレート           | 1個     |
| ボトムケース             | 1個     |
| ネジ長                   | 3個     |
| ネジ短                   | 1個     |

| 部品関係         | 個数        |
| :--------------- | :---------- |
| 基板             | 1枚         |
| キースイッチ     | 9個         |
| ダイオード       | 9個+予備1個 |
| ホットスワップ   | 7個         |
| DIPスイッチ      | 1個         |
| リセットスイッチ | 1個         |
| 20pinコネクタ    | 1セット     |

![ ](https://github.com/ataruno/A_PIECE_OF_KEYBOARD/blob/main/build_guide/build_guide_image_hard/01_%E3%82%AD%E3%83%83%E3%83%88%E5%86%85%E5%AE%B9_%E3%82%AD%E3%83%A3%E3%83%97%E3%82%B7%E3%83%A7%E3%83%B3%E3%81%82%E3%82%8A.jpg)

### スイッチについて  
Kailh Wizard Switch (Tactile Switch)がセットに含まれます。  
注：ビルドガイドでは一部Kailh Ghost Switchが映っていますが、キットにはWizard Switchが含まれます。  

## ご自身で手配いただくもの
### promicro
1つ ※複数つなげる場合でも1つあれば接続可能です。  

### コンスルー or ピンヘッダ
2つ、2.5mm、12ピン  

### promicroの向き
部品が実装されていない面にコンスルー or ピンヘッダを付けてください。  
※表面実装部品の干渉を避けるためです。  
![ ](https://github.com/ataruno/A_PIECE_OF_KEYBOARD/blob/main/build_guide/build_guide_image_hard/02_promicro.jpg)

## はんだ付け
### 裏面(はんだ付け前→はんだ付け後)

![ ](https://github.com/ataruno/A_PIECE_OF_KEYBOARD/blob/main/build_guide/build_guide_image_hard/11_%E5%9F%BA%E6%9D%BF_%E8%A3%8F.jpg)

以下の部分をはんだ付けしてください。  
ダイオード→DIPスイッチ→ホットスワップ→キースイッチの順がはんだ付けしやすいです。  
![ ](https://github.com/ataruno/A_PIECE_OF_KEYBOARD/blob/main/build_guide/build_guide_image_hard/12_%E3%81%AF%E3%82%93%E3%81%A0%E4%BB%98%E3%81%91%E7%AE%87%E6%89%80_%E8%A3%8F.jpg)

#### ダイオードの向き
基板の矢印の方向に、ダイオードの横線を合わせてください。  
![ ](https://github.com/ataruno/A_PIECE_OF_KEYBOARD/blob/main/build_guide/build_guide_image_hard/13_%E3%83%80%E3%82%A4%E3%82%AA%E3%83%BC%E3%83%89%E6%96%B9%E5%90%91_%E3%82%AD%E3%83%A3%E3%83%97%E3%82%B7%E3%83%A7%E3%83%B3.jpg)

#### DIPスイッチ
基板の番号とDIPスイッチの番号印字が同じになるようはんだ付けしてください。
![ ](https://github.com/ataruno/A_PIECE_OF_KEYBOARD/blob/main/build_guide/build_guide_image_hard/16_DIP%E3%82%B9%E3%82%A4%E3%83%83%E3%83%81.jpg)

#### キースイッチ
promicroと表裏で重なる2箇所はホットスワップでなくはんだ付けです。  
![ ](https://github.com/ataruno/A_PIECE_OF_KEYBOARD/blob/main/build_guide/build_guide_image_hard/18_%E3%81%AF%E3%82%93%E3%81%A0%E4%BB%98%E3%81%91%E5%BE%8C2.jpg)

promicroを付けると以下のようになります。  
![ ](https://github.com/ataruno/A_PIECE_OF_KEYBOARD/blob/main/build_guide/build_guide_image_hard/17_%E3%81%AF%E3%82%93%E3%81%A0%E4%BB%98%E3%81%91%E5%BE%8C1.jpg)

### 表面(部品無し→はんだ付け後)

![ ](https://github.com/ataruno/A_PIECE_OF_KEYBOARD/blob/main/build_guide/build_guide_image_hard/14_%E5%9F%BA%E6%9D%BF_%E8%A1%A8.jpg)

以下の部分をはんだ付けしてください。  
リセットスイッチ、20pinコネクタともに部品は裏面側です。  
表面からはんだ付けを行ってください。  
※1切れで使う場合(他ユニットと接続しない場合)は20pinコネクタは不要です。
![ ](https://github.com/ataruno/A_PIECE_OF_KEYBOARD/blob/main/build_guide/build_guide_image_hard/15_%E3%81%AF%E3%82%93%E3%81%A0%E4%BB%98%E3%81%91%E7%AE%87%E6%89%80_%E8%A1%A8.jpg)

## 組み立て
ボトムケースにはんだ付けした基板をはめます。  
![ ](https://github.com/ataruno/A_PIECE_OF_KEYBOARD/blob/main/build_guide/build_guide_image_hard/21_%E3%83%9C%E3%83%88%E3%83%A0%E3%83%97%E3%83%AC%E3%83%BC%E3%83%88.jpg)

USB部分は横から見ると以下のようになります。  
![ ](https://github.com/ataruno/A_PIECE_OF_KEYBOARD/blob/main/build_guide/build_guide_image_hard/22_%E6%A8%AA%E3%81%8B%E3%82%89%E8%A6%8B%E3%81%9F%E5%9B%B3.jpg)

### 補足：20pinコネクタを使わない場合
他ユニットと接続せず1切れで使用する場合、補助パーツをはめてください。  
ボトムケースにUSB部分のカバーをはめてください。  
基板の上に20pinコネクタ部分のカバーをはめてください。  
ボトムケースを上から被せ、基板ごとひっくり返すと楽です。  
![ ](https://github.com/ataruno/A_PIECE_OF_KEYBOARD/blob/main/build_guide/build_guide_image_hard/23_%E8%A3%9C%E5%8A%A9.jpg)
![ ](https://github.com/ataruno/A_PIECE_OF_KEYBOARD/blob/main/build_guide/build_guide_image_hard/23_%E8%A3%9C%E5%8A%A92.jpg)

ボトムプレート
ボトムプレートをはめて、1か所ねじ止め(短)します。
![ ](https://github.com/ataruno/A_PIECE_OF_KEYBOARD/blob/main/build_guide/build_guide_image_hard/24_%E3%83%9F%E3%83%89%E3%83%AB%E3%83%97%E3%83%AC%E3%83%BC%E3%83%88.jpg)

ホットスワップの箇所にキースイッチをはめます。
![ ](https://github.com/ataruno/A_PIECE_OF_KEYBOARD/blob/main/build_guide/build_guide_image_hard/25_%E3%82%AD%E3%83%BC%E3%82%B9%E3%82%A4%E3%83%83%E3%83%81%E8%A3%85%E7%9D%80.jpg)

上部カバーをはめて、裏向きにし、3か所ねじ止め(長)します。
![ ](https://github.com/ataruno/A_PIECE_OF_KEYBOARD/blob/main/build_guide/build_guide_image_hard/26_%E3%82%AB%E3%83%90%E3%83%BC%E3%81%AD%E3%81%98%E6%AD%A2%E3%82%81.jpg)

## 組み立ての完成
![ ](https://github.com/ataruno/A_PIECE_OF_KEYBOARD/blob/main/build_guide/build_guide_image_hard/31_%E5%AE%8C%E6%88%90.jpg)

## 部品について
家庭用の3Dプリンターで製造しているため、製造にばらつきがあります。ご了承ください。  
ロットによって細いパーツの有り無しがあります。  
事前に組み立てを行い、問題ないと判断したものをキットとしています。
ご理解のほどよろしくお願いいたします  

![ ](https://github.com/ataruno/A_PIECE_OF_KEYBOARD/blob/main/build_guide/build_guide_image_hard/41_%E3%82%AD%E3%83%BC%E3%82%AD%E3%83%A3%E3%83%83%E3%83%97%E8%83%8C%E9%9D%A2.jpg)

## プログラム書き込み(Remap)
### hexファイルのダウンロード
Githubにあるhexファイルをダウンロードしてください。
[hexファイル(Remap)](https://remap-keys.app/catalog/Ke6NdtYuFV1NoUlCXKXA/firmware)

![ ](https://github.com/ataruno/A_PIECE_OF_KEYBOARD/blob/main/build_guide/build_guide_image_remap/51_remap%E3%81%B8%E3%82%A2%E3%82%AF%E3%82%BB%E3%82%B9.jpg)

### hexファイルの書き込み
以下ではRemapでのプログラム書き込みを説明します。  
その他の書き込み手段としては、Pro Micro Web UpdaterやQMK Toolboxでも可能です。  
(ブラウザはChrome、Edgeで書き込みできることを確認済です。)  

Remap右上のアイコンをクリックしてください。  
![ ](https://github.com/ataruno/A_PIECE_OF_KEYBOARD/blob/main/build_guide/build_guide_image_remap/52_hex%E3%83%95%E3%82%A1%E3%82%A4%E3%83%AB%E3%81%AE%E3%83%80%E3%82%A6%E3%83%B3%E3%83%AD%E3%83%BC%E3%83%89.jpg)

"Upload Firmware"のポップアップがでます。  
先ほどダウンロードしたhexファイルをドラッグ・アンド・ドロップしてください。  
![ ](https://github.com/ataruno/A_PIECE_OF_KEYBOARD/blob/main/build_guide/build_guide_image_remap/53_hex%E3%83%95%E3%82%A1%E3%82%A4%E3%83%AB%E3%81%AE%E6%9B%B8%E3%81%8D%E8%BE%BC%E3%81%BF2.jpg)

キーボードとPCをUSBケーブルで接続してください。  
Bootloaderはcaterinaを選択し、FLASHをクリック。
![ ](https://github.com/ataruno/A_PIECE_OF_KEYBOARD/blob/main/build_guide/build_guide_image_remap/53_hex%E3%83%95%E3%82%A1%E3%82%A4%E3%83%AB%E3%81%AE%E6%9B%B8%E3%81%8D%E8%BE%BC%E3%81%BF3.jpg)

シリアルポートへの接続要求のポップアップが出ます。  
この状態で接続したキーボードのリセットスイッチ(promicroをリセット)を押してください。  
![ ](https://github.com/ataruno/A_PIECE_OF_KEYBOARD/blob/main/build_guide/build_guide_image_remap/53_hex%E3%83%95%E3%82%A1%E3%82%A4%E3%83%AB%E3%81%AE%E6%9B%B8%E3%81%8D%E8%BE%BC%E3%81%BF4.jpg)

リセットスイッチを押すと"Arduino Leonardo"と表示されます。  
![ ](https://github.com/ataruno/A_PIECE_OF_KEYBOARD/blob/main/build_guide/build_guide_image_remap/53_hex%E3%83%95%E3%82%A1%E3%82%A4%E3%83%AB%E3%81%AE%E6%9B%B8%E3%81%8D%E8%BE%BC%E3%81%BF5.jpg)

"Arduino Leonardo"を選択し、接続をクリックしてください。  
![ ](https://github.com/ataruno/A_PIECE_OF_KEYBOARD/blob/main/build_guide/build_guide_image_remap/53_hex%E3%83%95%E3%82%A1%E3%82%A4%E3%83%AB%E3%81%AE%E6%9B%B8%E3%81%8D%E8%BE%BC%E3%81%BF6.jpg)

書き込みが進み"Writing the firmware finished successfuly"となれば完了です。  
パーセンテージも100%になれば完了です。  
![ ](https://github.com/ataruno/A_PIECE_OF_KEYBOARD/blob/main/build_guide/build_guide_image_remap/53_hex%E3%83%95%E3%82%A1%E3%82%A4%E3%83%AB%E3%81%AE%E6%9B%B8%E3%81%8D%E8%BE%BC%E3%81%BF7.jpg)

## キーマップのカスタマイズ設定
キーマップの設定もRemapを活用できます。  

[Remap](https://remap-keys.app/)へ接続してください。  
![ ](https://github.com/ataruno/A_PIECE_OF_KEYBOARD/blob/main/build_guide/build_guide_image_remap/61_Remap%E3%81%A7%E3%81%AE%E3%82%AB%E3%82%B9%E3%82%BF%E3%83%9E%E3%82%A4%E3%82%BA.jpg)

"+KEYBOARD"をクリックしてください。  
![ ](https://github.com/ataruno/A_PIECE_OF_KEYBOARD/blob/main/build_guide/build_guide_image_remap/62_%E3%82%AD%E3%83%BC%E3%83%9C%E3%83%BC%E3%83%89%E3%81%AE%E9%81%B8%E6%8A%9E.jpg)

接続一覧から"A PIECE OF KEYBOARD"を選択し、"接続"をクリックしてください。  
![ ](https://github.com/ataruno/A_PIECE_OF_KEYBOARD/blob/main/build_guide/build_guide_image_remap/63_%E3%83%87%E3%83%90%E3%82%A4%E3%82%B9%E6%8E%A5%E7%B6%9A.jpg)

キーマップが表示されます。レイヤーは0から4までの5レイヤーが設定可能です。  

![ ](https://github.com/ataruno/A_PIECE_OF_KEYBOARD/blob/main/build_guide/build_guide_image_remap/64_%E3%82%AD%E3%83%BC%E3%83%9E%E3%83%83%E3%83%97%E8%A1%A8%E7%A4%BA.jpg)


![ ]()
![ ]()
![ ]()
![ ]()


