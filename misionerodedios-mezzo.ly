% This LilyPond file was generated by Rosegarden 1.5.1
\version "2.10.0"
% point and click debugging is disabled
#(ly:set-option 'point-and-click #f)
\header {
	title = "Misionero de Dios"
	composer = "R. Aldana, A. Salinas, P. Valdés"
	tagline = "Coro Juvenil San Juan Bosco"
	instrument = "Mezzosoprano"
}
#(set-global-staff-size 20)
#(set-default-paper-size "letter")
\paper {
	#(define line-width (* 7 in))
	print-first-page-number = ##t
	ragged-bottom = ##t
	first-page-number = 1
}
global = {
    \time 4/4
    \skip 1*99
}
globalTempo = {
    \tempo 4 = 92   \skip 1*6
    \tempo 4 = 102  \skip 1*4
    \tempo 4 = 107  \skip 1*89
}
\score {
    \new StaffGroup <<
        % force offset of colliding notes in chords:
        \override Score.NoteColumn #'force-hshift = #1.0

	\include "misionerodedios-marcas.inc"
	\include "misionerodedios-acordes.inc"
	\include "misionerodedios-mezzo.inc"
    >> % notes

    \layout {
	\context {
		%\RemoveEmptyStaffContext
	}
    }

} % score
