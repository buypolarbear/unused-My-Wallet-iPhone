//
//  UIModalView.h
//  Blockchain
//
//  Created by Ben Reeves on 19/07/2014.
//  Copyright (c) 2014 Qkos Services Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MyUIModalView : UIView {
 
}

@property(nonatomic, copy) void (^onDismiss)();
@property(nonatomic, copy) void (^onResume)();
@property(nonatomic, retain) IBOutlet UIView * modalContentView;
@property(nonatomic, retain) IBOutlet UIView * closeButtonBackground;

@property(nonatomic) BOOL isClosable;
@property(nonatomic, retain) IBOutlet UIButton * closeButton;

-(IBAction)closeModalClicked:(id)sender;

@end