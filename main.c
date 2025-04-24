int scoreOfString(char* s) 
{
    int i = 0;
    int v = 0;
    while(s[i])
    {
        if(s[i] && s[i+1])
        {
            if(s[i] >= s[i+1])
                v += s[i] - s[i+1];
            else
                v += s[i+1] - s[i];
        }
        i++;
    }
    return v;
}
