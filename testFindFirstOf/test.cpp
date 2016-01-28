#include <iostream>
#include <string>
using namespace std;

int main(){
  //string rtb_imp_str = " http://pd7-imp.revsci.net/rtbads/miaozhen/impression?adGroupKey=eLK78bMjwhliu7O4TOXQT-yTd9c&transactionId=f3d26209d08c5fa3f13edd8406001999-1452755150749&keyType=HIM&foreignUserId=QQIMEIMD5&primaryUserId=01ed9fa91b943eb9b1c1e60c94a29e15&timestamp=1452755150751";
  string rtb_imp_str = "http://pd7-imp.revsci.net/rtbads/miaozhen/impression?adGroupKey=puqVkzk8c51wUaAE7xTFTnOek3s&transactionId=8a083ff7de8cb03a7b223c7e99172d75-1452755221039&keyType=HIM&foreignUserId=QQIMEIMD5&primaryUserId=01ed9fa91b943eb9b1c1e60c94a29e15&timestamp=1452755221041";
  size_t mark_pos = rtb_imp_str.find_first_of("?");
   string ext2 = "www.baidu.com";
   if(mark_pos != string::npos){
        ext2 = rtb_imp_str.substr(mark_pos + 1, rtb_imp_str.size() - mark_pos - 1);
    }
   cout << ext2 << endl;

    return 0;
}
