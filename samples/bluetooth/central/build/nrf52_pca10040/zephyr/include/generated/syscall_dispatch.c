/* auto-generated by gen_syscalls.py, don't edit */

/* Weak handler functions that get replaced by the real ones unless a system
 * call is not implemented due to kernel configuration.
 */

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_k_object_access_grant(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_k_object_release(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_k_object_alloc(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_k_thread_create(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_k_sleep(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_k_yield(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_k_wakeup(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_k_current_get(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_k_thread_cancel(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_k_thread_abort(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_k_thread_start(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_k_thread_priority_get(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_k_thread_priority_set(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_k_thread_deadline_set(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_k_thread_suspend(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_k_thread_resume(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_k_is_preempt_thread(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_k_thread_custom_data_set(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_k_thread_custom_data_get(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_k_timer_start(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_k_timer_stop(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_k_timer_status_get(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_k_timer_status_sync(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_k_timer_remaining_get(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_k_timer_user_data_set(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_k_timer_user_data_get(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_k_uptime_get(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_k_uptime_get_32(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_k_queue_init(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_k_queue_cancel_wait(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_k_queue_alloc_append(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_k_queue_alloc_prepend(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_k_queue_get(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_k_queue_is_empty(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_k_queue_peek_head(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_k_queue_peek_tail(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_k_stack_alloc_init(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_k_stack_push(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_k_stack_pop(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_k_mutex_init(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_k_mutex_lock(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_k_mutex_unlock(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_k_sem_init(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_k_sem_take(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_k_sem_give(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_k_sem_reset(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_k_sem_count_get(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_k_alert_recv(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_k_alert_send(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_k_msgq_alloc_init(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_k_msgq_put(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_k_msgq_get(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_k_msgq_purge(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_k_msgq_num_free_get(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_k_msgq_get_attrs(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_k_msgq_num_used_get(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_k_pipe_alloc_init(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_k_pipe_put(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_k_pipe_get(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_k_poll(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_k_poll_signal_init(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_k_poll_signal_reset(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_k_poll_signal_check(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_k_poll_signal(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_k_str_out(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_adc_enable(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_adc_disable(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_adc_read(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_rtc_read(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_rtc_enable(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_rtc_disable(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_rtc_set_alarm(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_rtc_get_pending_int(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_uart_err_check(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_uart_poll_in(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_uart_poll_out(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_uart_irq_tx_enable(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_uart_irq_tx_disable(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_uart_irq_rx_enable(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_uart_irq_rx_disable(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_uart_irq_err_enable(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_uart_irq_err_disable(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_uart_irq_is_pending(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_uart_irq_update(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_uart_line_ctrl_set(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_uart_line_ctrl_get(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_uart_drv_cmd(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_i2c_configure(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_i2c_transfer(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_dma_start(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_dma_stop(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_gpio_config(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_gpio_write(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_gpio_read(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_gpio_enable_callback(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_gpio_disable_callback(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_gpio_get_pending_int(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_pwm_pin_set_cycles(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_pwm_get_cycles_per_sec(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_spi_transceive(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_spi_release(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_flash_read(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_flash_write(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_flash_erase(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_flash_write_protection_set(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_flash_get_page_info_by_offs(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_flash_get_page_info_by_idx(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_flash_get_page_count(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_flash_get_write_block_size(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_led_blink(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_led_set_brightness(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_led_on(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_led_off(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_aio_cmp_disable(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_aio_cmp_get_pending_int(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_counter_start(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_counter_stop(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_counter_read(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_counter_get_pending_int(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_entropy_get_entropy(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_sensor_attr_set(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_sensor_sample_fetch(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_sensor_sample_fetch_chan(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_sensor_channel_get(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_can_send(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_can_attach_msgq(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_can_attach_isr(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_can_detach(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_can_configure(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_ipm_send(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_ipm_max_data_size_get(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_ipm_max_id_val_get(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t _handler_ipm_set_enabled(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);


const _k_syscall_handler_t _k_syscall_table[K_SYSCALL_LIMIT] = {
	[K_SYSCALL_K_OBJECT_ACCESS_GRANT] = _handler_k_object_access_grant,
	[K_SYSCALL_K_OBJECT_RELEASE] = _handler_k_object_release,
	[K_SYSCALL_K_OBJECT_ALLOC] = _handler_k_object_alloc,
	[K_SYSCALL_K_THREAD_CREATE] = _handler_k_thread_create,
	[K_SYSCALL_K_SLEEP] = _handler_k_sleep,
	[K_SYSCALL_K_YIELD] = _handler_k_yield,
	[K_SYSCALL_K_WAKEUP] = _handler_k_wakeup,
	[K_SYSCALL_K_CURRENT_GET] = _handler_k_current_get,
	[K_SYSCALL_K_THREAD_CANCEL] = _handler_k_thread_cancel,
	[K_SYSCALL_K_THREAD_ABORT] = _handler_k_thread_abort,
	[K_SYSCALL_K_THREAD_START] = _handler_k_thread_start,
	[K_SYSCALL_K_THREAD_PRIORITY_GET] = _handler_k_thread_priority_get,
	[K_SYSCALL_K_THREAD_PRIORITY_SET] = _handler_k_thread_priority_set,
	[K_SYSCALL_K_THREAD_DEADLINE_SET] = _handler_k_thread_deadline_set,
	[K_SYSCALL_K_THREAD_SUSPEND] = _handler_k_thread_suspend,
	[K_SYSCALL_K_THREAD_RESUME] = _handler_k_thread_resume,
	[K_SYSCALL_K_IS_PREEMPT_THREAD] = _handler_k_is_preempt_thread,
	[K_SYSCALL_K_THREAD_CUSTOM_DATA_SET] = _handler_k_thread_custom_data_set,
	[K_SYSCALL_K_THREAD_CUSTOM_DATA_GET] = _handler_k_thread_custom_data_get,
	[K_SYSCALL_K_TIMER_START] = _handler_k_timer_start,
	[K_SYSCALL_K_TIMER_STOP] = _handler_k_timer_stop,
	[K_SYSCALL_K_TIMER_STATUS_GET] = _handler_k_timer_status_get,
	[K_SYSCALL_K_TIMER_STATUS_SYNC] = _handler_k_timer_status_sync,
	[K_SYSCALL_K_TIMER_REMAINING_GET] = _handler_k_timer_remaining_get,
	[K_SYSCALL_K_TIMER_USER_DATA_SET] = _handler_k_timer_user_data_set,
	[K_SYSCALL_K_TIMER_USER_DATA_GET] = _handler_k_timer_user_data_get,
	[K_SYSCALL_K_UPTIME_GET] = _handler_k_uptime_get,
	[K_SYSCALL_K_UPTIME_GET_32] = _handler_k_uptime_get_32,
	[K_SYSCALL_K_QUEUE_INIT] = _handler_k_queue_init,
	[K_SYSCALL_K_QUEUE_CANCEL_WAIT] = _handler_k_queue_cancel_wait,
	[K_SYSCALL_K_QUEUE_ALLOC_APPEND] = _handler_k_queue_alloc_append,
	[K_SYSCALL_K_QUEUE_ALLOC_PREPEND] = _handler_k_queue_alloc_prepend,
	[K_SYSCALL_K_QUEUE_GET] = _handler_k_queue_get,
	[K_SYSCALL_K_QUEUE_IS_EMPTY] = _handler_k_queue_is_empty,
	[K_SYSCALL_K_QUEUE_PEEK_HEAD] = _handler_k_queue_peek_head,
	[K_SYSCALL_K_QUEUE_PEEK_TAIL] = _handler_k_queue_peek_tail,
	[K_SYSCALL_K_STACK_ALLOC_INIT] = _handler_k_stack_alloc_init,
	[K_SYSCALL_K_STACK_PUSH] = _handler_k_stack_push,
	[K_SYSCALL_K_STACK_POP] = _handler_k_stack_pop,
	[K_SYSCALL_K_MUTEX_INIT] = _handler_k_mutex_init,
	[K_SYSCALL_K_MUTEX_LOCK] = _handler_k_mutex_lock,
	[K_SYSCALL_K_MUTEX_UNLOCK] = _handler_k_mutex_unlock,
	[K_SYSCALL_K_SEM_INIT] = _handler_k_sem_init,
	[K_SYSCALL_K_SEM_TAKE] = _handler_k_sem_take,
	[K_SYSCALL_K_SEM_GIVE] = _handler_k_sem_give,
	[K_SYSCALL_K_SEM_RESET] = _handler_k_sem_reset,
	[K_SYSCALL_K_SEM_COUNT_GET] = _handler_k_sem_count_get,
	[K_SYSCALL_K_ALERT_RECV] = _handler_k_alert_recv,
	[K_SYSCALL_K_ALERT_SEND] = _handler_k_alert_send,
	[K_SYSCALL_K_MSGQ_ALLOC_INIT] = _handler_k_msgq_alloc_init,
	[K_SYSCALL_K_MSGQ_PUT] = _handler_k_msgq_put,
	[K_SYSCALL_K_MSGQ_GET] = _handler_k_msgq_get,
	[K_SYSCALL_K_MSGQ_PURGE] = _handler_k_msgq_purge,
	[K_SYSCALL_K_MSGQ_NUM_FREE_GET] = _handler_k_msgq_num_free_get,
	[K_SYSCALL_K_MSGQ_GET_ATTRS] = _handler_k_msgq_get_attrs,
	[K_SYSCALL_K_MSGQ_NUM_USED_GET] = _handler_k_msgq_num_used_get,
	[K_SYSCALL_K_PIPE_ALLOC_INIT] = _handler_k_pipe_alloc_init,
	[K_SYSCALL_K_PIPE_PUT] = _handler_k_pipe_put,
	[K_SYSCALL_K_PIPE_GET] = _handler_k_pipe_get,
	[K_SYSCALL_K_POLL] = _handler_k_poll,
	[K_SYSCALL_K_POLL_SIGNAL_INIT] = _handler_k_poll_signal_init,
	[K_SYSCALL_K_POLL_SIGNAL_RESET] = _handler_k_poll_signal_reset,
	[K_SYSCALL_K_POLL_SIGNAL_CHECK] = _handler_k_poll_signal_check,
	[K_SYSCALL_K_POLL_SIGNAL] = _handler_k_poll_signal,
	[K_SYSCALL_K_STR_OUT] = _handler_k_str_out,
	[K_SYSCALL_ADC_ENABLE] = _handler_adc_enable,
	[K_SYSCALL_ADC_DISABLE] = _handler_adc_disable,
	[K_SYSCALL_ADC_READ] = _handler_adc_read,
	[K_SYSCALL_RTC_READ] = _handler_rtc_read,
	[K_SYSCALL_RTC_ENABLE] = _handler_rtc_enable,
	[K_SYSCALL_RTC_DISABLE] = _handler_rtc_disable,
	[K_SYSCALL_RTC_SET_ALARM] = _handler_rtc_set_alarm,
	[K_SYSCALL_RTC_GET_PENDING_INT] = _handler_rtc_get_pending_int,
	[K_SYSCALL_UART_ERR_CHECK] = _handler_uart_err_check,
	[K_SYSCALL_UART_POLL_IN] = _handler_uart_poll_in,
	[K_SYSCALL_UART_POLL_OUT] = _handler_uart_poll_out,
	[K_SYSCALL_UART_IRQ_TX_ENABLE] = _handler_uart_irq_tx_enable,
	[K_SYSCALL_UART_IRQ_TX_DISABLE] = _handler_uart_irq_tx_disable,
	[K_SYSCALL_UART_IRQ_RX_ENABLE] = _handler_uart_irq_rx_enable,
	[K_SYSCALL_UART_IRQ_RX_DISABLE] = _handler_uart_irq_rx_disable,
	[K_SYSCALL_UART_IRQ_ERR_ENABLE] = _handler_uart_irq_err_enable,
	[K_SYSCALL_UART_IRQ_ERR_DISABLE] = _handler_uart_irq_err_disable,
	[K_SYSCALL_UART_IRQ_IS_PENDING] = _handler_uart_irq_is_pending,
	[K_SYSCALL_UART_IRQ_UPDATE] = _handler_uart_irq_update,
	[K_SYSCALL_UART_LINE_CTRL_SET] = _handler_uart_line_ctrl_set,
	[K_SYSCALL_UART_LINE_CTRL_GET] = _handler_uart_line_ctrl_get,
	[K_SYSCALL_UART_DRV_CMD] = _handler_uart_drv_cmd,
	[K_SYSCALL_I2C_CONFIGURE] = _handler_i2c_configure,
	[K_SYSCALL_I2C_TRANSFER] = _handler_i2c_transfer,
	[K_SYSCALL_DMA_START] = _handler_dma_start,
	[K_SYSCALL_DMA_STOP] = _handler_dma_stop,
	[K_SYSCALL_GPIO_CONFIG] = _handler_gpio_config,
	[K_SYSCALL_GPIO_WRITE] = _handler_gpio_write,
	[K_SYSCALL_GPIO_READ] = _handler_gpio_read,
	[K_SYSCALL_GPIO_ENABLE_CALLBACK] = _handler_gpio_enable_callback,
	[K_SYSCALL_GPIO_DISABLE_CALLBACK] = _handler_gpio_disable_callback,
	[K_SYSCALL_GPIO_GET_PENDING_INT] = _handler_gpio_get_pending_int,
	[K_SYSCALL_PWM_PIN_SET_CYCLES] = _handler_pwm_pin_set_cycles,
	[K_SYSCALL_PWM_GET_CYCLES_PER_SEC] = _handler_pwm_get_cycles_per_sec,
	[K_SYSCALL_SPI_TRANSCEIVE] = _handler_spi_transceive,
	[K_SYSCALL_SPI_RELEASE] = _handler_spi_release,
	[K_SYSCALL_FLASH_READ] = _handler_flash_read,
	[K_SYSCALL_FLASH_WRITE] = _handler_flash_write,
	[K_SYSCALL_FLASH_ERASE] = _handler_flash_erase,
	[K_SYSCALL_FLASH_WRITE_PROTECTION_SET] = _handler_flash_write_protection_set,
	[K_SYSCALL_FLASH_GET_PAGE_INFO_BY_OFFS] = _handler_flash_get_page_info_by_offs,
	[K_SYSCALL_FLASH_GET_PAGE_INFO_BY_IDX] = _handler_flash_get_page_info_by_idx,
	[K_SYSCALL_FLASH_GET_PAGE_COUNT] = _handler_flash_get_page_count,
	[K_SYSCALL_FLASH_GET_WRITE_BLOCK_SIZE] = _handler_flash_get_write_block_size,
	[K_SYSCALL_LED_BLINK] = _handler_led_blink,
	[K_SYSCALL_LED_SET_BRIGHTNESS] = _handler_led_set_brightness,
	[K_SYSCALL_LED_ON] = _handler_led_on,
	[K_SYSCALL_LED_OFF] = _handler_led_off,
	[K_SYSCALL_AIO_CMP_DISABLE] = _handler_aio_cmp_disable,
	[K_SYSCALL_AIO_CMP_GET_PENDING_INT] = _handler_aio_cmp_get_pending_int,
	[K_SYSCALL_COUNTER_START] = _handler_counter_start,
	[K_SYSCALL_COUNTER_STOP] = _handler_counter_stop,
	[K_SYSCALL_COUNTER_READ] = _handler_counter_read,
	[K_SYSCALL_COUNTER_GET_PENDING_INT] = _handler_counter_get_pending_int,
	[K_SYSCALL_ENTROPY_GET_ENTROPY] = _handler_entropy_get_entropy,
	[K_SYSCALL_SENSOR_ATTR_SET] = _handler_sensor_attr_set,
	[K_SYSCALL_SENSOR_SAMPLE_FETCH] = _handler_sensor_sample_fetch,
	[K_SYSCALL_SENSOR_SAMPLE_FETCH_CHAN] = _handler_sensor_sample_fetch_chan,
	[K_SYSCALL_SENSOR_CHANNEL_GET] = _handler_sensor_channel_get,
	[K_SYSCALL_CAN_SEND] = _handler_can_send,
	[K_SYSCALL_CAN_ATTACH_MSGQ] = _handler_can_attach_msgq,
	[K_SYSCALL_CAN_ATTACH_ISR] = _handler_can_attach_isr,
	[K_SYSCALL_CAN_DETACH] = _handler_can_detach,
	[K_SYSCALL_CAN_CONFIGURE] = _handler_can_configure,
	[K_SYSCALL_IPM_SEND] = _handler_ipm_send,
	[K_SYSCALL_IPM_MAX_DATA_SIZE_GET] = _handler_ipm_max_data_size_get,
	[K_SYSCALL_IPM_MAX_ID_VAL_GET] = _handler_ipm_max_id_val_get,
	[K_SYSCALL_IPM_SET_ENABLED] = _handler_ipm_set_enabled,
	[K_SYSCALL_BAD] = handler_bad_syscall
};
