// TETRIS Move W,A,S,D Rotate U,I
#include<SDL.h>
#include<stdlib.h>
#define c if
#define q for
#define Z return
typedef int I;typedef void V;I A[7][5]={3840,17476,3840,17476,3904,1824,8992,624,9760,255,1808,12832,1136,8800,3968,1856,8752,368,25120,895,1632,1632,1632,1632,4080,1584,4896,1584,4896,3855,864,17952,864,17952,240},B[]={480599,139810,476951,476999,350020,464711,464727,476228,481111,481092,467490,463639,467490,480085,467495,397891},C[]={0,1,2,2,4,3,6,4,7,8,8,12,9,16,10,20,12,24,14,28,16,32,17,36,20,1,22,8,23,16,24,48,25,64,30,128,33,192,36,256,40,320,42,256,45,192,50,1280,999},a,h,i,j,D,E,F,G,H,J,K,L,M=32,N,O,P,k[512],Q[4],v,b[23][11],R;Uint16 p[850];template<class F>V Y(F f,I y=5,I x=4){q(j=0,h=1;j<y;++j)q(i=0;i<x;++i)f(),h<<=1;}V d(I x,I y,I z){p[794+x-y*34]=z;}V S(I g){M=g;N=0;}I T(I x,I y){Z(x>=0&&y>=0&&x<10&&y<22)?b[y][x]:1;}I U(){v=0;Y([](){c((A[G][L]&h)&&T(J+i,K+j))v=1;});Z v;}V W(){J=E;K=F;L=H;}V g(){W();K=F-1;c(U())c(k[22])O=999;else++O;else{q(i=0;R>=10*C[i];i+=2);P+=C[i-1];c(k[22]&&P<64)P=64;c(k[26])P=1280;}q(;P>63;){P-=64;K=F-1;c(!U())F=K,O=0;}}I X(){a=0;q(i=0;i<22;++i){q(j=0;j<10;++j)c(!b[i][j])goto e;b[i][10]=1;c(++R>999)R=999;++a;e:;}Z a;}V ZZ(){q(i=22;i>=0;--i)c(b[i][10])q(j=i;j<21;++j)q(a=0;a<11;++a)b[j][a]=b[j+1][a];}V l(I d){Y([](){c((A[G][H]&h)&&!T(E+i,F+j))b[F+j][E+i]=1;});c(d)S(8);else S(2);}V m(I r,I k){W();L=(H+r)%4;c(U()){++J;c(!k||U()){J-=2;c(!k||U())Z;}}E=J;H=L;}V n(I f){c(f){*Q=Q[2]=6;Q[1]=Q[3]=7;D=rand()%4;}else{q(i=0;i<6;++i){D=rand()%7;q(j=0;j<4;++j)c(Q[j]!=D)j=4;}}q(i=3;i>0;--i)Q[i]=Q[i-1];*Q=D;}V s(){G=D;n(0);E=3;F=17;H=0;c(k[24]>1)m(3,0);c(k[12]>1)m(1,0);W();c(U()){l(0);S(4);Z;}S(1);c(R%100<99&&R!=998)++R;O=0;P=0;g();}V o(I x){W();J=E+x;c(!U())E=J;}I u(I x,I y,I z,I w){c(z>w)z=w;Z(y-x)*100*z/w/100+x;}I main(I,char**){SDL_Init(33);srand(SDL_GetPerformanceCounter());auto w=SDL_CreateWindow(0,0,0,800,600,1);auto r=SDL_CreateRenderer(w,-1,6);auto t=SDL_CreateTexture(r,355602434,1,34,25);SDL_Event e;q(;;){++N;q(i=0;i<512;++i)c(k[i])++k[i];q(;SDL_PollEvent(&e);){a=e.key.keysym.scancode;c(e.type==768)++k[a];c(e.type==769)k[a]=0;c(e.type==256||k[41])Z 0;}c(k[4]&&k[7]>k[4])k[7]=0;c(k[7]&&k[4]>k[7])k[4]=0;c(k[24]&&k[12]>k[24])k[12]=0;c(k[12]&&k[24]>k[12])k[24]=0;c(M&4&&N>60)S(32);q(i=0;i<512;++i)c(M&32&&k[i])SDL_memset(b,0,sizeof b),n(1),S(0),R=0;c(!M&&N>60)s();c(M&8)c(N>4)c(X())S(16);else S(2);c(M&16&&N>37)ZZ(),S(2);c(M&2&&N>26)s();c(M&1){c(k[24]==1)m(3,1);c(k[12]==1)m(1,1);c(k[4]==1||k[4]>14)o(-1);c(k[7]==1||k[7]>14)o(1);g();c(O>30)l(1);}SDL_memset(p,0,sizeof p);c(M&32){q(a=0;a<6;++a)Y([](){c(B[10+a]&h)d(-6+4*a+i,10+j,4095);});}else{Y([](){d(i,j,b[j][10]?273*u(7,1,N,15):b[j][i]?1911:273);},20,10);c(M&9)Y([](){c(A[G][H]&h)d(E+i,F+j,M&8?273*u(15,7,N,4):A[G][4]);});Y([](){c(*A[D]&h)d(3+i,20+j,A[D][4]);});q(a=1,v=0;a<101;a*=10,++v)Y([](){c(B[R/a%10]&h)d(i+14,2+6*v+j,1911);});}SDL_UpdateTexture(t,0,p,34*sizeof*p);SDL_RenderCopy(r,t,0,0);SDL_RenderPresent(r);}}
