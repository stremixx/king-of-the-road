
void __fastcall thunk_FUN_005923f0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_0064f88c;
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = param_1 + 1;
  }
  if (*(undefined4 **)param_1[3] == puVar1) {
    iVar2 = param_1[1];
    if (iVar2 == 0) {
      iVar2 = param_1[2];
    }
    *(int *)param_1[3] = iVar2;
  }
  FUN_00592540();
  return;
}

