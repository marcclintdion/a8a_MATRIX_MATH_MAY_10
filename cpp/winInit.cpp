


int WINAPI WinMain(	HINSTANCE hInstance,
					HINSTANCE hPrevInstance,
					LPSTR     lpCmdLine,
					int       nCmdShow )
{
	WNDCLASSEX winClass;
	MSG        uMsg;

    memset(&uMsg,0,sizeof(uMsg));


    
    winClass.lpszClassName = "MY_WINDOWS_CLASS";
	winClass.cbSize        = sizeof(WNDCLASSEX);
	winClass.style         = CS_HREDRAW | CS_VREDRAW | CS_OWNDC;
	winClass.lpfnWndProc   = WindowProc;
	winClass.hInstance     = hInstance;
    winClass.hIcon	       = LoadIcon(NULL, IDI_APPLICATION);
    winClass.hIconSm	   = LoadIcon(NULL, IDI_APPLICATION);
	winClass.hCursor       = LoadCursor(NULL, IDC_ARROW);
	winClass.hbrBackground = (HBRUSH)GetStockObject(BLACK_BRUSH);
	winClass.lpszMenuName  = NULL;
	winClass.cbClsExtra    = 0;
	winClass.cbWndExtra    = 0;
	
	if( !RegisterClassEx(&winClass) )
		return E_FAIL;

	hWnd = CreateWindowEx( 0,"MY_WINDOWS_CLASS",
						    "D1_C3",
							WS_OVERLAPPEDWINDOW,
					 	    0, 0, (DWORD)screenWidth, (DWORD)screenHeight, 0, 0, hInstance, 0 );//WS_POPUP | WS_VISIBLE,<<<----fullscreen

	
    
    if( hWnd == NULL )
		return E_FAIL;

    ShowWindow( hWnd, nCmdShow );
    UpdateWindow( hWnd );




Init();
Dot3shader();


	while( uMsg.message != WM_QUIT )
	{
		if( PeekMessage( &uMsg, NULL, 0, 0, PM_REMOVE ) )
		{ 
			TranslateMessage( &uMsg );
			DispatchMessage( &uMsg );
		}
        
        
        else 
            if(over == true)
            {
                       break;
            }           
        
        
        else
        {   
            ProcessKeyboard();
            frameStart = GetTickCount();
		    render();
        }
	}

	
    
    shutDown();

    UnregisterClass( "MY_WINDOWS_CLASS", hInstance );

	return uMsg.wParam;
	
}


LRESULT CALLBACK WindowProc(HWND   hWnd, 
							UINT   msg, 
							WPARAM wParam, 
							LPARAM lParam)
{
    static POINT ptLastMousePosit;
	static POINT ptCurrentMousePosit;
	static bool  bMousing;

/*
        if(msg == WM_KEYDOWN)
		{
			keys[wParam] = TRUE;					// If So, Mark It As TRUE
            return 0;								// Jump Back
		}
        else
        
        if(msg == WM_LBUTTONDOWN)
		{
			ptLastMousePosit.x = ptCurrentMousePosit.x = LOWORD (lParam);
            ptLastMousePosit.y = ptCurrentMousePosit.y = HIWORD (lParam);
			bMousing = true;
		}
        else
		
        if(msg == WM_KEYUP)								// Has A Key Been Released?
		{
			keys[wParam] = FALSE;					// If So, Mark It As FALSE
			return 0;								// Jump Back
		}
        else
		
        if(msg == WM_LBUTTONUP)
		{
			bMousing = false;
		}
        else
		
        if(msg == WM_MOUSEMOVE)
		{
			ptCurrentMousePosit.x = LOWORD (lParam);
			ptCurrentMousePosit.y = HIWORD (lParam);

			if( bMousing )
			{
				eyePosition[2] += ((ptCurrentMousePosit.x - ptLastMousePosit.x)*.01f);
				spinY -= (ptCurrentMousePosit.y - ptLastMousePosit.y);
			}
			
			ptLastMousePosit.x = ptCurrentMousePosit.x;
            ptLastMousePosit.y = ptCurrentMousePosit.y;
		}
        else
		
        if(msg == WM_SIZE)
		{
			int nWidth  = LOWORD(lParam); 
			int nHeight = HIWORD(lParam);
			glViewport(0, 0, nWidth, nHeight);

			glMatrixMode( GL_PROJECTION );
			glLoadIdentity();
			gluPerspective( 45.0, (GLdouble)nWidth / (GLdouble)nHeight, 0.1, 100.0);
		}
        else
		
        if(msg == WM_CLOSE)
		{
			PostQuitMessage(0);	
		}
        else
        
        if(msg == WM_DESTROY)
		{
            PostQuitMessage(0);
		}
        else
        return DefWindowProc( hWnd, msg, wParam, lParam );
*/	
	     

    
    switch( msg )
	{
        case WM_KEYDOWN:
		{
			keys[wParam] = TRUE;					// If So, Mark It As TRUE
            return 0;								// Jump Back
		}
        break;

        case WM_LBUTTONDOWN:
		{
			ptLastMousePosit.x = ptCurrentMousePosit.x = LOWORD (lParam);
            ptLastMousePosit.y = ptCurrentMousePosit.y = HIWORD (lParam);
			bMousing = true;
		}
		break;
		
		case WM_KEYUP:								// Has A Key Been Released?
		{
			keys[wParam] = FALSE;					// If So, Mark It As FALSE
			return 0;								// Jump Back
		}
		break;

		case WM_LBUTTONUP:
		{
			bMousing = false;
		}
		break;

		case WM_MOUSEMOVE:
		{
			ptCurrentMousePosit.x = LOWORD (lParam);
			ptCurrentMousePosit.y = HIWORD (lParam);

			if( bMousing )
			{
                  look_LEFT_RIGHT += (ptCurrentMousePosit.x - ptLastMousePosit.x) * .1;
                  look_UP_DOWN    += (ptCurrentMousePosit.y - ptLastMousePosit.y)    * .1;
            }
                   

			
			ptLastMousePosit.x = ptCurrentMousePosit.x;
            ptLastMousePosit.y = ptCurrentMousePosit.y;
		}
		break;
		
		case WM_SIZE:
		{
			int nWidth  = LOWORD(lParam); 
			int nHeight = HIWORD(lParam);
			glViewport(0, 0, nWidth, nHeight);

                  glMatrixMode( GL_PROJECTION );
                  glLoadIdentity();
                  gluPerspective( 45.24, (GLdouble)nWidth / (GLdouble)nHeight, 0.1, 1000);

        screenWidth  = nWidth;
        screenHeight = nHeight;
		
        }
		break;

		case WM_CLOSE:
		{
			PostQuitMessage(0);	
		}

        case WM_DESTROY:
		{
            PostQuitMessage(0);
		}
        break;
		
		default:
		{
			return DefWindowProc( hWnd, msg, wParam, lParam );
		}
		break;
	}
    return 0;
	
}

void shutDown( void )
{
    if (fullscreen)										// Are We In Fullscreen Mode?
	{
		ChangeDisplaySettings(NULL,0);					// If So Switch Back To The Desktop
		ShowCursor(TRUE);								// Show Mouse Pointer
	}
        
        glDeleteFramebuffersEXT(1, &fboId);

    
    if( hRC != NULL )
	{
		wglMakeCurrent( NULL, NULL );
		wglDeleteContext( hRC );
		hRC = NULL;							
	}
    
    if( hDC != NULL )
	{
		ReleaseDC( hWnd, hDC );
		hDC = NULL;
	}
}





