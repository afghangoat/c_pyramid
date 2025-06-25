																																																																																																																																#include <stdio.h>
																																																																																																																																#include <time.h>
																																																																																																																																#include <math.h>
																																																																																																																																#define d double
																																																																																																																																	#define a
																						    a 
                                                                                          a a a
																					    a a a a a
																					  a	d d_=0.0; a
																					 const int f=100;
																				   const d PI=3.14159 ;
																				 const d RAD=0.0174532 a;
																			   const int length=8; a a a a
																			 const d e=0.01; a a a a a a a a
																		   void dms(int ms){clock_t s =clock();
																		 while(clock()<s+ms*CLOCKS_PER_SEC/1000);
																	   } unsigned char mapper[25][40];a a a a a a a
																	 void clear_mapper(){for(int y=0;y<25;y++) {for a
																   (int x=0;x<40;x++){mapper[y][x]=' ';}}}void dl(int z,
																 int y1, int x2, int y2, char what) {d mx=((d)x2-(d)z); a
															   d my=((d)y2-(d)y1);d diver=1.0;if(fabs(mx)>fabs(my)){if a  a
															 (fabs(mx)<e){diver=e;} else {diver=fabs(mx);}} else {if(fabs(  a
														   my)<e){diver=e;} else {diver=fabs(my);}}mx=mx/diver;my=my/diver; a a
												         d sx=(d)z;d sy=(d)y1;while(fabs(x2-sx)>e||fabs(y2-sy)>e){if(sx<0.0|| a a
													   sy<0.0||sx>(d)40-1.0||sy>(d)25-1.0){break;} mapper[(int)sy][(int)sx]=what; a
													 sx+=mx;sy+=my;}}typedef struct P{d x;d y;}P;P ce;int main(){ce.x=17.0;ce.y=17.0;
												   while(1){dms(f); clear_mapper();dl(ce.x,ce.y,ce.x+cos(d_)*length,ce.y+sin(d_) a a  a
												 *length,'#');dl(ce.x,ce.y,ce.x+cos(PI/1.5+d_)*length,ce.y+sin(PI/1.5+d_)*length,'#');a a
											   dl(ce.x,ce.y,ce.x+cos(2.0*PI/1.5+d_)*length,ce.y+sin(2.0*PI/1.5+d_)*length,'#');dl(ce.x  a a
											 +cos(d_)*length,ce.y+sin(d_)*length,ce.x+cos(2.0*PI/1.5+d_)*length, ce.y+sin(2.0*PI/1.5+d_)  a a
										   *length,'-');dl(ce.x+cos(d_)*length,ce.y+sin(d_)*length,ce.x+cos(PI/1.5+d_)*length,ce.y+sin( a a a a
										 PI/1.5+d_)*length,'-');dl(ce.x+cos(PI/1.5+d_)*length, ce.y+sin(PI/1.5+d_)*length,ce.x+cos(2.0*PI/1.5 a a
									   +d_)*length,ce.y+sin(2.0*PI/1.5+d_)*length,'-');for(int y=0;y<25;y++){for(int x=0;x<40;x++){printf("%c", a a
									 mapper[y][x]);}printf("\n");}fflush(stdout);d_+=5.0*RAD;}return 0;} a a a a a a a a a a a a a a a a a a a a  a a