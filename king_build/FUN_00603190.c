
void __fastcall FUN_00603190(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
  (**(code **)*puVar1)(puVar1,&DAT_006544e0,param_1 + 0xc);
  return;
}

