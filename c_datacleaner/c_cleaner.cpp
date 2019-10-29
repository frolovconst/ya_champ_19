#include<iostream>
#include<fstream>

using namespace std;

int main(int argc, char **argv){
  cout << "Hello";
  char c;
  string str;
  ifstream t_file(argv[1]);
  ofstream o_file("clean_test.tsv");
  int tab_count = 0;
  int example_id;
  int line_len = 0;
  while(t_file.get(c)){
	  if (c == '\t'){
		  tab_count++;
	  }
	  if (c == '\n'){
		  if (tab_count > 1){
			  o_file.put(c);
			  tab_count = 0;
		  }
		  else
			  o_file.put(' ');
		  continue;
	  }
	  o_file.put(c);


	  
//
//
//    while (tab_count<2){
//      line_len = str.length();
//      for (int i=0; i<line_len; i++){
//        if str[i] == '\t'{
//          tab_count++;
//        }
//      }
//    }
//    if tab_count > 1{
//      o_file << str;
//    }
//
//
//    else{
//      getline(t_file, str)
//    }
//    o_file << str << endl;  
//    o_file.putline(str);

  }
  o_file.close();
  t_file.close();
  return 0;
}
