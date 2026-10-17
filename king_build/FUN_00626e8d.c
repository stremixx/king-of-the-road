
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00626e8d(void)

{
  void *pvVar1;
  char *pcVar2;
  int local_c;
  int local_8;
  
  if (DAT_0077da50 == 0) {
    FUN_006203a2();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_0072d204,0x104);
  _DAT_0072d0b4 = &DAT_0072d204;
  pcVar2 = &DAT_0072d204;
  if (*DAT_0077da48 != '\0') {
    pcVar2 = DAT_0077da48;
  }
  FUN_00626f26(pcVar2,0,0,&local_8,&local_c);
  pvVar1 = _malloc(local_c + local_8 * 4);
  if (pvVar1 == (void *)0x0) {
    __amsg_exit(8);
  }
  FUN_00626f26(pcVar2,pvVar1,(void *)((int)pvVar1 + local_8 * 4),&local_8,&local_c);
  _DAT_0072d09c = pvVar1;
  _DAT_0072d098 = local_8 + -1;
  return;
}

