
/* auto-generated by gen_syscalls.py, don't edit */

#ifndef _ASMLANGUAGE

#include <syscall_list.h>
#include <syscall_macros.h>

#ifdef __cplusplus
extern "C" {
#endif

K_SYSCALL_DECLARE4(K_SYSCALL_SPI_TRANSCEIVE, spi_transceive, int, struct device *, dev, const struct spi_config *, config, const struct spi_buf_set *, tx_bufs, const struct spi_buf_set *, rx_bufs);

K_SYSCALL_DECLARE2(K_SYSCALL_SPI_RELEASE, spi_release, int, struct device *, dev, const struct spi_config *, config);

#ifdef __cplusplus
}
#endif

#endif
