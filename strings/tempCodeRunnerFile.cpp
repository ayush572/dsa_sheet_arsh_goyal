if(x==s1.length()+1 && y!=s2.length()+1)
        return 0;
    else if(x==s1.length()+1 && y==s2.length()+1)
        return 1;
    if(s1[x]==s2[y])
    {
        x++;
        y++;
    }
    else
        x++;
    return palindrom_chk(s1,s2,x,y);