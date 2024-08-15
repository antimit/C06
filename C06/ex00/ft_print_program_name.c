#include <unistd.h>

int arg_len(char ** argv)
{
    int i = 0;

    while(argv[0][i]!=0)
    {
        i++;
    }
    return i;
}
int main(int argc, char ** argv)
{
    int i;

    i = arg_len(argv);

    int j =0;
    while(j < i)
    {
        write(1,&argv[0][j],1);
        j++;
    }
    write(1,"\n",1);
    return 0;   

}