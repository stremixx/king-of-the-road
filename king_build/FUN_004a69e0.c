
char * __fastcall FUN_004a69e0(undefined4 *param_1)

{
  char *pcVar1;
  
  if ((param_1[2] & 0x10000) != 0) {
    return s_<IMMEDIATE>_00670104;
  }
                    /* WARNING: Could not recover jumptable at 0x004a69f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = (char *)(**(code **)(*(int *)*param_1 + 4))();
  return pcVar1;
}

