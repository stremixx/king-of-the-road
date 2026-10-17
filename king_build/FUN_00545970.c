
void __fastcall FUN_00545970(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  float10 fVar4;
  undefined1 local_1b8 [28];
  undefined4 local_19c;
  undefined4 local_198;
  undefined1 auStack_194 [17];
  float local_183;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0064695b;
  local_c = ExceptionList;
  local_198 = 0xb;
  local_19c = *(undefined4 *)(param_1 + 0x4b4);
  puVar3 = (undefined1 *)(param_1 + 0x523c);
  iVar2 = 0;
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 4;
    auStack_194[iVar2] = uVar1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x11);
  ExceptionList = &local_c;
  fVar4 = (float10)FUN_00554c10();
  *(float *)(param_1 + 0x28b0) = (float)fVar4;
  local_183 = (float)fVar4;
  FUN_006022c0();
  local_4 = 0;
  FUN_006027f0((int)DAT_0067c04a,&local_19c,0x1d);
  FUN_005c2d10(local_1b8);
  local_4 = 0xffffffff;
  FUN_00602560();
  ExceptionList = local_c;
  return;
}

