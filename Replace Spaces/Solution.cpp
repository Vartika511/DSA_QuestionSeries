string replaceSpaces(string &str){
         string s="@40";
            for(int i=0; i<str.length();i++){
                if(str[i]==' '){
                   str.replace(i,1,s);
                }
            }
    return str;
}
