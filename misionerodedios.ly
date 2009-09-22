% This LilyPond file was generated by Rosegarden 1.5.1
\version "2.10.0"
% point and click debugging is disabled
#(ly:set-option 'point-and-click #f)
\header {
    composer = "R. Aldana, A. Salinas, P. Valdés"
    title = "Misionero de Dios"
    tagline = "Coro Juvenil San Juan Bosco"
}
#(set-global-staff-size 20)
#(set-default-paper-size "letter")
global = {
    \time 4/4
    \skip 1*99
}
globalTempo = {
    \tempo 4 = 92   \skip 1*6 \break
    \tempo 4 = 102  \skip 1*4 \break
    \tempo 4 = 107
	% estrofa 1:
	\skip 1*8 \break
	% estrofa 2:
	\skip 1*8 \break
	% puente 1:
	\skip 1*8 \break
	% coro 1:
	\skip 1*7 \break
	% interludio:
	\skip 1*8 \break
	% estrofa 3:
	\skip 1*8 \break
	% estrofa 4:
	\skip 1*8 \break
	% puente 2:
	\skip 1*8 \break
	% coro 2:
	\skip 1*9 \break
	% coro 3:
	\skip 1*7 \break
	% finale:
	\skip 1*10 \break

}
\score {
    \new StaffGroup <<
        % force offset of colliding notes in chords:
        \override Score.NoteColumn #'force-hshift = #1.0

	\include "misionerodedios-marcas.inc"
	\include "misionerodedios-acordes.inc"
	\include "misionerodedios-soprano.inc"
	\include "misionerodedios-mezzo.inc"
	\include "misionerodedios-tenor.inc"
	\include "misionerodedios-violin.inc"
	\include "misionerodedios-cello.inc"
	\include "misionerodedios-bajo.inc"
    >> % notes

    \layout {
	\context {
		\RemoveEmptyStaffContext
	}
    }

} % score
