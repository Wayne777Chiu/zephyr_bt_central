if(CONFIG_FILE_SYSTEM)
  zephyr_link_interface_ifdef(CONFIG_FAT_FILESYSTEM_ELM ELMFAT)
  zephyr_link_interface_ifdef(CONFIG_FILE_SYSTEM_NFFS   NFFS)

  zephyr_library()
  zephyr_library_sources(fs.c)
  zephyr_library_sources_ifdef(CONFIG_FAT_FILESYSTEM_ELM fat_fs.c)
  zephyr_library_sources_ifdef(CONFIG_FILE_SYSTEM_NFFS   nffs_fs.c)
  zephyr_library_sources_ifdef(CONFIG_FILE_SYSTEM_SHELL  shell.c)

  zephyr_library_link_libraries_ifdef(CONFIG_FAT_FILESYSTEM_ELM ELMFAT)
  zephyr_library_link_libraries_ifdef(CONFIG_FILE_SYSTEM_NFFS   NFFS)
endif()

add_subdirectory_ifdef(CONFIG_FCB  ./fcb)
add_subdirectory_ifdef(CONFIG_NVS  ./nvs)
