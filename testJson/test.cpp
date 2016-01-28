#include<iostream>
#include<string>
#include<json/json.h>
using namespace std;

int main(){
    Json::Value root;
    //root["idm"] = "string1";
    //root["idm1"] = "string2";
    //    root["idm"][1]["ok"].append("string2");
    //root["idm"]["1"]["ok"] = "string1";
    /*    Json::Value bid;
          Json::Value ytrq;
          Json::Value ytrsp;
          Json::Value tmp;
    //Json::objectValue objtmp1;
    ytrsp["id"] = "1111";
    //ytrsp["id"][] = tmp;
    tmp["adm"] = "";
    if(ytrq.isMember("imp") && ytrq["imp"].isArray() && ytrq["imp"].size() != 0){
    Json::Value::UInt imp_index = 0;
    if(ytrq["imp"][imp_index].isMember("id"))
    tmp["impid"] = ytrq["imp"][imp_index]["id"]; 
    }
    bid.append(tmp);
    Json::Value::UInt sindex = 0;
    Json::Value seatbid;
    seatbid[sindex]["bid"]=bid;
    ytrsp["seatbid"] = seatbid;

    Json::FastWriter fw;
    string request_json =  fw.write(ytrsp);
    cout << request_json << endl;

    string str1("IOS");
    if(str1 == "IOS")
    cout << "OK" << endl
    */
    std::string ytrq = "";
    Json::Reader read;
    Json::Value value;
    Json::FastWriter writer;
    std::string new_str =  writer.write(value);

    std::cout << ytrq.size() << value.empty() << new_str[0] <<"____" <<new_str[1] << "_____"<< new_str[2]<< "*****"<< new_str.size() << endl;
/*    value["ldh"] = "001";
    value["gfc"] = "002";
    Json::Value item;
    Json::Value array;
    item["andy1"] = "005";
    array.append( item );
    item["andy1"] = "123";
    array.append( item );
    item["andy1"] = "true";
    array.append(item);
    value["andy"] = array;
    Json::Value val_array = value["andy"];
    int iSize = val_array.size();
    for ( int nIndex = 0;nIndex < iSize;++ nIndex )
    {
        std::cout<<val_array[nIndex]<<endl;
        if ( !val_array[nIndex]["andy1"].isNull() )
        {
            cout<<val_array[nIndex]["andy1"]<<endl;
        }
    }
    */
}
