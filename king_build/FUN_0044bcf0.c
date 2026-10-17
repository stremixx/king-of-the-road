
void FUN_0044bcf0(uint param_1)

{
  size_t _Size;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint local_10;
  undefined1 local_c [12];
  
  uVar1 = DAT_0068c178 - (int)DAT_0068c174;
  local_10 = 0x14;
  puVar3 = DAT_0068c174;
  if (uVar1 < param_1 * 0x14) {
    if (uVar1 < param_1) {
      _Size = ((DAT_0068c170 >> 4) + 7 & 0xfffffff8) + param_1 * 0x28;
      if (uVar1 != 0) {
        *DAT_0068c174 = *(undefined4 *)(&DAT_0068c120 + (uVar1 + 7 >> 3) * 4);
        *(undefined4 **)(&DAT_0068c120 + (uVar1 + 7 >> 3) * 4) = DAT_0068c174;
      }
      DAT_0068c174 = _malloc(_Size);
      uVar1 = param_1;
      if (DAT_0068c174 == (undefined4 *)0x0) {
        for (; uVar1 < 0x81; uVar1 = uVar1 + 8) {
          puVar3 = *(undefined4 **)(&DAT_0068c120 + (uVar1 + 7 >> 3) * 4);
          if (puVar3 != (undefined4 *)0x0) {
            *(undefined4 *)(&DAT_0068c120 + (uVar1 + 7 >> 3) * 4) = *puVar3;
            DAT_0068c178 = (int)puVar3 + uVar1;
            DAT_0068c174 = puVar3;
            goto LAB_0044be43;
          }
        }
        DAT_0068c178 = 0;
        puVar2 = _malloc(_Size);
        puVar3 = DAT_0068c174;
        while (DAT_0068c174 = puVar2, DAT_0068c174 == (undefined4 *)0x0) {
          DAT_0068c174 = puVar3;
          if (DAT_0068c16c == (code *)0x0) {
            FUN_00448220(s_bad_allocation_0066e484);
                    /* WARNING: Subroutine does not return */
            __CxxThrowException_8(local_c,&DAT_00658d50);
          }
          (*DAT_0068c16c)();
          puVar2 = _malloc(_Size);
          puVar3 = DAT_0068c174;
        }
      }
      DAT_0068c170 = DAT_0068c170 + _Size;
      DAT_0068c178 = (int)DAT_0068c174 + _Size;
LAB_0044be43:
      puVar3 = (undefined4 *)FUN_0045a160(param_1,&local_10);
    }
    else {
      local_10 = uVar1 / param_1;
      DAT_0068c174 = (undefined4 *)((int)DAT_0068c174 + local_10 * param_1);
    }
    if (local_10 == 1) {
      return;
    }
  }
  else {
    DAT_0068c174 = DAT_0068c174 + param_1 * 5;
  }
  puVar3 = (undefined4 *)((int)puVar3 + param_1);
  *(undefined4 **)(&DAT_0068c120 + (param_1 + 7 >> 3) * 4) = puVar3;
  iVar4 = 1;
  puVar2 = puVar3;
  if (local_10 != 2) {
    do {
      puVar3 = (undefined4 *)((int)puVar2 + param_1);
      *puVar2 = puVar3;
      iVar4 = iVar4 + 1;
      puVar2 = puVar3;
    } while (local_10 - 1 != iVar4);
  }
  *puVar3 = 0;
  return;
}

