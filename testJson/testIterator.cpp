#include <iostream>
#include "json/json.h"

using namespace std;

int main(int argc, char **argv)
{
  Json::Value change;
  Json::Value minParameters;
  Json::Value minParametersAnm;
 
  minParameters["MinimumRMS"] = 0.2;
  minParameters["sgbUpdated"] = true;
  change["Minimizer"] = minParameters;
  minParametersAnm["MinimumRMS"] = 0.5;
  minParametersAnm["sgbUpdated"] = false;
  change["Minimizer::ANM"] = minParametersAnm;
 
 // cout<<"Traverse members of: "<<endl
 //   <<"\"change\":"<<endl
 //   <<change.toStyledString()<<endl<<endl;
 
  Json::Value::iterator it = change.begin();
 
  cout<<"List of members:"<<endl;
  for(Json::Value::iterator it = change.begin(); it !=change.end(); ++it)
  {
      Json::Value key = it.key();
      Json::Value value = (*it);
      
//      cout<<"Key: "<<key.toStyledString();
      cout<<"Value: "<<value.toStyledString();
      cout<<"Value: "<<value["sgbUpdated"];
    }
  return 0;
}
