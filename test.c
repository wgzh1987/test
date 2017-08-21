//Test code for coverity scan
int test()
{
  int i, j;
  
  i = 0;
  switch(i)
  {
    case 0:
      j = 1;
      break;
    case 1:
      j = 2;
      break;
    default:
      break;
  }

  return 0;
}
