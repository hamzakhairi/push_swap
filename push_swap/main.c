/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhairi <hkhairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 15:50:10 by hkhairi           #+#    #+#             */
/*   Updated: 2025/01/18 14:24:42 by hkhairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"

void print_stack(t_push *stack, char stack_name)
{
    printf("Stack %c: ", stack_name);
    while (stack)
    {
        printf("{number : %d, index : %d } -> ", stack->number, stack->index);
        stack = stack->next;
    }
    printf("NULL\n");
}

int stack_size(t_push *stack)
{
    int size = 0;

    while (stack)
    {
        size++;
        stack = stack->next;
    }
    return size;
}

t_get get_data_number(t_push **stack_b)
{
    t_get data;
    t_push *current; 
    int max_value;      
    int max_index = 0;     
    int index = 0;          

    if (!stack_b || !*stack_b) 
    {
        data.value = 0;    
        data.index = -1;
        return data;
    }

    current = *stack_b;  
    max_value = current->number;  

    while (current)         
    {
        if (current->number > max_value) 
        {
            max_value = current->number;
            max_index = index;            
        }
        current = current->next;         
        index++; 
    }

    data.value = max_value;  
    data.index = max_index;
    return data;
}



/*
  if (data.index <= med)
            ft_rotate_from_up_to_down_to_push_a(stack_a, stack_b, data);
        else
            ft_rotate_from_down_to_up_to_push_a(stack_a, stack_b, data);
*/
void ft_return_to_stack_a(t_push **stack_a, t_push **stack_b)
{
    while (*stack_b)
    {
        t_get data = get_data_number(stack_b);
        
        int med = stack_size(*stack_b) / 2; 

        if (data.index <= med)
        while (*stack_b)
        {
            if ((*stack_b)->number == data.value)
                {
                    pa(stack_a, stack_b);
                    printf("pa\n");
                    break;
                }
                rb(stack_b);
                printf("rb\n");
        }
        else
        {
            while (*stack_b)
            {
                if ((*stack_b)->number == data.value)
                {
                    pa(stack_a, stack_b);
                    printf("pa\n");
                    break;
                }
            rrb(stack_b);
            printf("rrb\n");
               
            }
        }
    }
}


void ft_prohandler(t_push **list, t_push **stack_b)
{
    int i = 0;
    // int range = 13;
    int range = stack_size(*list) / 12 ;

    while (*list)
    {
        t_push *first = *list;

        if (first->index <= i)
        {
            pb(list, stack_b);
            printf("pb\n");
            i++;
        }
        else if (first->index <= (i + range))
        {
            pb(list, stack_b);
            printf("pb\n");
            rb(stack_b);
            printf("rb\n");
            i++;
        }
        else
        {
            ra(list);
            printf("ra\n");
        }
    }
}


int main(int argc, char *argv[])
{
    t_push *a = NULL;
    t_push *b = NULL;

    (void)argc;
    init_stack(&a, argv + 1);
    is_sort(a);

    // printf("Before start:\n");
    // print_stack(a, 'A');
    // print_stack(b, 'B');

    ft_prohandler(&a, &b);
    ft_return_to_stack_a(&a, &b);


    
    // t_get data = get_data_number(&b);
    
    // printf("{index : %d , value : %d}\n",data.index, data.value);

    // printf("After sort:\n");
    // print_stack(a, 'A');
    // print_stack(b, 'B');

    free_node(a);
    // free_node(b);
    return (0);
}








// void sort_to_mid(t_push **stack_a, t_push **stack_b)
// {
//     int size = stack_size(*stack_a);
//     int mid = size / 2;
//     t_push *top;
//     int i  =0;
    
//     t_push *curnt = *stack_b;
//     while (curnt)
//     {
//         top = *stack_a;
//         if (top->index < mid) // Place smaller numbers at the bottom
//         {
//             pb(stack_a, stack_b);
//             rrb(stack_b); // Rotate stack_b reverse to place smaller numbers at bottom
//             // printf("pb + rrb (index: %d)\n", top->index);
//             printf("pb\n");
//             printf("rrb\n");
//         }
//         else // Place larger numbers at the top
//         {
//             pb(stack_a, stack_b);
//             // printf("pb (index: %d)\n", top->index);
//             printf("pb\n");
//         }
//     }
// }
// -----------

// void sort(t_push **stack_a, t_push **stack_b)
// {
//     int chunk_size = 13;
//     int target = 0;
//     t_push *current;

//     while (*stack_a)
//     {
//         current = *stack_a;
//         if (current->index <= target)
//         {
//             pb(stack_a, stack_b); 
//             printf("pb\n");
//             target++;
//         }
//         else if (current->index <= (target + chunk_size))
//         {
//             pb(stack_a, stack_b);
//             rrb(stack_b); 
//             printf("pb\n");
//             printf("rb\n");
//             target++;
//         }
//         else
//         {
//             ra(stack_a);
//             printf("ra\n");
//         }
//     }
// }
// ------------

// void start_push_swap(t_push **stack_a, t_push **stack_b)
// {
//     if (!stack_a || !*stack_a || !(*stack_a)->next)
//         return;
    
//     // if (stack_size(*stack_a) <= 5)
//     //     small_stack_sort(stack_a, stack_b);
//     else 
//         sort(stack_a, stack_b);
// }

    // int i = 0;
    // t_push *stack_b = NULL;
    // t_push *first = *list;
    // int range = 13;
    
    // while (first)
    // {
    //     if (first->index <= i)
    //     {
    //         pb(&first, &stack_b);
    //         i++;
    //     }
    //     else if (first->index <= (i + range))
    //     {
    //         pb(&first, &stack_b);
    //         rb(&stack_b);
    //         i++;
    //     }
    //     else
    //     {
    //         ra(&first);
    //         first = *list;
    //     }
    // }