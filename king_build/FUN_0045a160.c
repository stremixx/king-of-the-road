
undefined4 * FUN_0045a160(uint param_1,uint *param_2)

{
  size_t _Size;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined1 auStack_c [12];
  
  uVar4 = *param_2 * param_1;
  uVar1 = DAT_0068c178 - (int)DAT_0068c174;
  if (uVar1 < uVar4) {
    do {
      if (param_1 <= uVar1) {
        *param_2 = uVar1 / param_1;
        puVar3 = DAT_0068c174;
        DAT_0068c174 = (undefined4 *)((int)DAT_0068c174 + (uVar1 / param_1) * param_1);
        return puVar3;
      }
      _Size = ((DAT_0068c170 >> 4) + 7 & 0xfffffff8) + uVar4 * 2;
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
            goto LAB_0045a251;
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
            __CxxThrowException_8(auStack_c,&DAT_00658d50);
          }
          (*DAT_0068c16c)();
          puVar2 = _malloc(_Size);
          puVar3 = DAT_0068c174;
        }
      }
      DAT_0068c178 = (int)DAT_0068c174 + _Size;
      DAT_0068c170 = DAT_0068c170 + _Size;
LAB_0045a251:
      uVar1 = DAT_0068c178 - (int)DAT_0068c174;
      uVar4 = *param_2 * param_1;
    } while (uVar1 < uVar4);
  }
  puVar3 = DAT_0068c174;
  DAT_0068c174 = (undefined4 *)((int)DAT_0068c174 + uVar4);
  return puVar3;
}

