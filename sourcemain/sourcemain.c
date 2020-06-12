#include<stdio.h>
struct fnode
{
   struct fnode *next;
   char name[NAME_SIZE];
}


int main(int argc,char* argv[])
{

   if(argc < 2)
{
  printf("usage:%s dir_name\n",argv[0]);
  exit(EXIT_FAILURE);
}
  int i;
  for(i = 1;i < argc;++i)
{
  struct fnode *linklist = NULL;
  struct stat stat_info;
  if(stat(argv[i],&stat_info) == -1)
  {
    perror("stat");
    exit(EXIT_FAILURE);
  }
  if(S_ISRGE(stat_info.st_mode))
  {
    struct fnode *temp = (struct fnode*) malloc (sizeof(struct fnode));
    if(temp == NULL)
    {
      perror("malloc");
      exit(EXIT_FAILURE);
    }
    temp->next = NULL;
    memset(temp->name,'\0',NAME_SIZE);
    memcpy(temp->name,argv[i],strlen(argv[i]));
    linklist = insert_list(temp,linklist);
    output_info(linklist);
  }
  else if(S_ISDIR(stat_info.st_mode))
  {
    char buf[NAME_SIZE];
    getcwd(buf,128);
    DIR *dirp = NULL;
    dirp = opendir(argv[i]);
    if(dirp == NULL)
    {
      perror("opendir");
      exit(EXIT_FAILURE);
    }
    struct dirent *entp = NULL;
    while(entp = readdir(dirp))
    {
      struct fnode *temp = (struct fnode *)malloc(sizeof(struct fnode));
      if(temp == NULL)
      {
        perror("malloc");
        exit(EXIT_FAILURE);
      }
      temp->next = NULL;
      memset(temp->name,'\0',NAME_SIZE);
      memcpy(temp->name,entp->d_name,strlen(entp->d_name));
      linklist = insert_list(temp ,linklist);
    }
    chdir(argv[i]);
    close(dirp);
    output_info(linklist);
    chdir(buf);
  }
  free_list(linklist);
}
return 1;
}
