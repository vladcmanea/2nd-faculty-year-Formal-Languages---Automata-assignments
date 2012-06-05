#include<stdio.h>
char e[1001],s[101];
int v[26],n,p;
int eval1(void);

void read(void)
{ freopen("bool.in","r",stdin);
  gets(e);
  scanf("%d%s",&n,s); }

int eval3(void)
{ if(e[p]=='N'&&e[p+1]=='O')
  { p+=4;
    return !eval3(); }
  if(e[p]=='T'&&e[p+1]=='R')
  { p+=4;
    return 1; }
  if(e[p]=='F'&&e[p+1]=='A')
  { p+=5;
    return 0; }
  if(e[p]=='(')
  { int r;
    p++;
    r=eval1();
    p++;
    return r; }
  p++;
  return v[e[p-1]-'A']; }

int eval2(void)
{ int r=eval3();
  while(e[p]&&e[p+1]=='A')
  { p+=5;
    r&=eval3(); }
  return r; }

int eval1(void)
{ int r=eval2();
  while(e[p]&&e[p]!=')')
  { p+=4;
    r|=eval2(); }
  return r; }

void solve(void)
{ int i;
  freopen("bool.out","w",stdout);
  for(i=0;i<n;i++,p=0)
  { v[s[i]-'A']=!v[s[i]-'A'];
    printf("%d",eval1()); }
  printf("\n"); }

int main(void)
{ read();
  solve();
  return 0; }
