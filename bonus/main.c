/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychagri <ychagri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 15:20:57 by ychagri           #+#    #+#             */
/*   Updated: 2024/03/07 17:32:46 by ychagri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Mandatory/Inc/push.h"

int	main(int ac, char **av)
{
	if (!valid_arg(ac, av) || valid_arg(ac, av) == 2)
	{
		if (!valid_arg(ac, av))
			return (ft_putstr_fd("Error\n", 0), 1);
		else
			exit(0);
	}
	if (!checker(av))
		return (ft_putstr_fd("Error\n", 0), 1);
	return (0);
}

// abort
//AddressSanitizer:DEADLYSIGNAL
//=================================================================
//==11645==ERROR: AddressSanitizer: SEGV on unknown address 0x0000f3f3f308 (pc 0x0001023b8d07 bp 0x7ffeed848510 sp 0x7ffeed848510 T0)
//==11645==The signal is caused by a READ memory access.
//    #0 0x1023b8d07 in ft_lstlast+0x27 (push_swap:x86_64+0x100001d07)
//    #1 0x1023b8c84 in ft_lstadd_back+0x54 (push_swap:x86_64+0x100001c84)
//    #2 0x1023bbecd in check_n_fill fill_stack.c:88
//    #3 0x1023bdad8 in main main.c:29
//    #4 0x7fff66923cc8 in start+0x0 (libdyld.dylib:x86_64+0x1acc8)

//==11645==Register values:
//rax = 0x00000000f3f3f300  rbx = 0x00007ffeed848640  rcx = 0x0000604000000390  rdx = 0x0000000000000000  
//rdi = 0x00007ffeed848640  rsi = 0x0000604000000390  rbp = 0x00007ffeed848510  rsp = 0x00007ffeed848510  
// r8 = 0x0000200000000000   r9 = 0x0000000000000000  r10 = 0xffffffffffffffff  r11 = 0x00000fffffffffff  
//r12 = 0x0000000000000000  r13 = 0x0000000000000000  r14 = 0x0000000000000000  r15 = 0x0000000000000000  
//AddressSanitizer can not provide additional info.
//SUMMARY: AddressSanitizer: SEGV (push_swap:x86_64+0x100001d07) in ft_lstlast+0x27
//==11645==ABORTING
//[1]    11645 abort      ./push_swap 4 345 3452 3423