#include <stdlib.h>                                                                                                                               
#include <stdio.h>                                                                                                                                
#include <time.h>                                                                                                                                 
                                                                                                                                                  
/**                                                                                                                                               
 *  * main - Entry point                                                                                                                             
 *   *                                                                                                                                                
 *    * this program assigns a random number to n each time the program is executed                                                                    
 *     *                                                                                                                                                
 *      * Return: Always 0 (Success)                                                                                                                     
 *       */                                                                                                                                               
int main(void)                                                                                                                                    
{                                                                                                                                                 
	        int n;                                                                                                                                    
		                                                                                                                                                  
		        srand(time(0));                                                                                                                           
			        n = rand() - RAND_MAX / 2;                                                                                                                
				                                                                                                                                                  
				        /* find the last digit of a number */                                                                                                     
				        int lastDigit = n % 10;                                                                                                                   
					                                                                                                                                                  
					        if (n > 0)                                                                                                                                
							        {                                                                                                                                         
									                if (lastDigit > 5)                                                                                                                
												                {                                                                                                                                 
															                        printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);                                                   
																		                }                                                                                                                                 
											                else if (lastDigit < 6 && lastDigit != 0)                                                                                         
														                {                                                                                                                                 
																	                        printf("Last digit of %d is %d and                                                                                        
																						                                is less than 6 and not 0\n", n, lastDigit);                                                                       
																					                }                                                                                                                                 
													                else if (lastDigit == 0)                                                                                                          
																                {                                                                                                                                 
																			                        printf("Last digit of %d is %d and is 0", n, lastDigit);                                                                  
																						                }                                                                                                                                 
															        }                                                                                                                                         
						        else if (n < 0)                                                                                                                           
								        {                                                                                                                                         
										                if (lastDigit < 6 && lastDigit != 0)                                                                                              
													                {                                                                                                                                 
																                        printf("Last digit of %d is -%d                                                                                           
																					                                        and is less than 6 and not 0\n", n, lastDigit);                                                           
																				                }                           
