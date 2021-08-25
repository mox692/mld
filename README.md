minild is a simple toy linker.

### limit
* don't use libc.(so we need call syscall directory.)
* don't consider shared object file.

### step
* setup develop env
- [ ] setup develop env
  - [ ] don't use libc. 
    - [ ] create alternative syscall lib.
    - [ ] create alternative start up routine.(we don't use .so file.)
- [ ] impl linker's internal logic func
  - [ ] Symbol resolution
- [ ] impl dynamic linker.(binary doing symbol resolution)
- [ ] impl static linker.(create ELF executable)

インクリメンタルにつくっていくよ
