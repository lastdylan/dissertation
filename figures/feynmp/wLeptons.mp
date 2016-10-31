% wLeptons.mp -- do not edit, generated automatically by photonFerm.tex
input feynmp
require_RCS_revision "1.30";
beginchar(1, 150*1.0pt#, 100*1.0pt#, 0);
"feynmf: 1";
LaTeX_unitlength:=1.0pt;
subgraph (0, 0, w, h);
vinit;
pickup pencircle scaled thin;
vvertex ("label=$f$", __q1);
vvertex ("label=$f$", __q2);
vvertex ("label=$A_{\mu }$", __g);
vleft (__g);
vright (__q1, __q2);
vvertex ("label=$e\gamma ^\mu Q$,label.dist=30", __v1);
vconnect ("boson", __g, __v1);
vconnect ("fermion, tension=0.7", __q1, __v1);
vconnect ("fermion, tension=0.7", __v1, __q2);
vdotn (__v, 1);
vfreeze;
vdraw;
endsubgraph;
endchar;
% the end.
end.
endinput;
