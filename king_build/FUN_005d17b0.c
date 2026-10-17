
void __thiscall FUN_005d17b0(undefined4 *param_1,LPCSTR param_2,undefined4 param_3)

{
  HANDLE pvVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  
  if (*(char *)(param_1 + 5) == '\0') {
    param_1[2] = param_3;
    pvVar1 = CreateFileA(param_2,0xc0000000,1,(LPSECURITY_ATTRIBUTES)0x0,2,0x90000000,(HANDLE)0x0);
    *param_1 = pvVar1;
    if (pvVar1 != (HANDLE)0xffffffff) {
      pvVar1 = CreateFileMappingA(pvVar1,(LPSECURITY_ATTRIBUTES)0x0,4,0,param_1[2],(LPCSTR)0x0);
      param_1[1] = pvVar1;
      puVar2 = MapViewOfFile(pvVar1,0xf001f,0,0,0);
      param_1[4] = 0;
      param_1[3] = puVar2;
      if (puVar2 != (undefined4 *)0x0) {
        uVar4 = param_1[2];
        for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar2 = 0;
          puVar2 = puVar2 + 1;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar2 = 0;
          puVar2 = (undefined4 *)((int)puVar2 + 1);
        }
      }
      *(undefined1 *)(param_1 + 5) = 1;
    }
  }
  return;
}

